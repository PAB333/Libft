/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:02:48 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/07 13:05:25 by pibreiss         ###   ########.fr       */
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
        i = 0;
        while (i < count)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
		i = count;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (d);
}
