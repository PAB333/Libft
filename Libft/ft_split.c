/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:54:51 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/11 16:03:34 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**make_array(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	count;

	i = -1;
	count = 1;
	while (s[++i])
	{
		if (s[i] == c)
			count++;
	}
	array = (char**)malloc(sizeof(char *) * count + 1);
	if (array == NULL)
		return (NULL);
	return (array);
}

static char	*make_str(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] && s[i] != c)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s[0] == '\0')
		return (NULL);
	array = make_array(s, c);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			array[j] = make_str(&s[i], c);
			if (array[j] == '\0')
			{
				while (j > 0)
					free(array[--j]);
				free(array);
				return (NULL);
			}
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	array[j] = '\0';
	return (array);
}
