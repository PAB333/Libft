/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pab <pab@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:08:16 by pab               #+#    #+#             */
/*   Updated: 2024/11/08 12:20:55 by pab              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	void *	array;

	array = malloc(elementCount * elementSize);
	if (array == NULL)
		return (NULL);
	return (ft_memset(array, 0, elementCount * elementSize));
}
