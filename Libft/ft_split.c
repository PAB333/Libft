/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:54:51 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/13 18:38:46 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_string(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*make_array(size_t start, size_t end, const char *s)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = 0;
	i = 0;
	array = (char **)malloc(sizeof(char *) * (count_string(s, c) + 1));
	if (array == NULL)
		return (NULL);
	while (s[end])
	{
		if (s[end] == c)
		{
			if (end > start)
				array[i++] = make_array(start, end, s);
			start = end + 1;
		}
		end++;
	}
	if (end > start)
		array[i++] = make_array(start, end, s);
	array[i] = NULL;
	return (array);
}
