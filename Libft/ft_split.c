/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:54:51 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/11 18:48:57 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_string(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	string;

	i = -1;
	count = 0;
	string = 0;
	while (s[++i])
	{
		if (s[i] != c && string == 0)
		{
			string = 1;
			count++;
		}
		else if (s[i] == c)
			string = 0;
		i++;
	}
	return (count);
}