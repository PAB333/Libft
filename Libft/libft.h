/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:19:44 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/07 13:39:56 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *destination, const void *source, size_t size );
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_isprint(int c);
int		ft_isdigit(int n);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(char c);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *nptr);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif