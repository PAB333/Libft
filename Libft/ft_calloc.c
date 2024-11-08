/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:54:58 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/08 14:55:09 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	void	*array;

	array = malloc(elementCount * elementSize);
	if (array == NULL)
		return (NULL);
	return (ft_memset(array, 0, elementCount * elementSize));
}
