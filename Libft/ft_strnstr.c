/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pab <pab@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:45:26 by pab               #+#    #+#             */
/*   Updated: 2024/11/08 12:03:53 by pab              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char *	b;
	char *	l;
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
