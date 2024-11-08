/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:56:06 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/08 14:56:08 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*array;
	size_t	i;

	array = malloc(sizeof(char) * (ft_strlen(source) + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (source[i])
	{
		array[i] = source[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
