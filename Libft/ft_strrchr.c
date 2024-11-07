/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:34:30 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/07 15:50:42 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[slen]);
	while (slen > 0)
	{
		slen--;
		if (s[slen] == (char)c)
		{
			return ((char *)&s[slen]);
		}
	}
	return (NULL);
}
