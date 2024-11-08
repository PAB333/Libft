/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:56:18 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/08 14:56:20 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	i;
	size_t	j;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	if (l[i] == '\0')
		return (b);
	while (b[i] && i < len)
	{
		if (b[i] == l[0])
		{
			j = 0;
			while (b[i + j] == l[j] && i + j < len)
			{
				if (l[j + 1] == '\0')
					return (b + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
