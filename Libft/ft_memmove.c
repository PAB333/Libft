/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:02:48 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/08 14:54:23 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s || count == 0)
		return (dest);
	if (d < s)
	{
		i = -1;
		while (++i < count)
			d[i] = s[i];
	}
	else
	{
		while (count > 0)
		{
			count--;
			d[count] = s[count];
		}
	}
	return (d);
}
