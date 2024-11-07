/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:02:48 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/07 11:05:54 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < count)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
#include <stdio.h>
int main()
{
    // Cas 1 : Pas de chevauchement, zones source et destination distinctes
    {
        char src[] = "Bonjour!";
        char dest[10];

        ft_memmove(dest, src, 9); // Copier "Bonjour!" dans dest
        printf("Cas 1 - Pas de chevauchement : dest = %s\n", dest);
    }

    // Cas 2 : Chevauchement (dest avant src)
    {
        char str[] = "abcdefg";

        ft_memmove(str + 2, str, 4); // Déplacer "abcd" à partir de str[2]
        printf("Cas 2 - Chevauchement (dest avant src) : str = %s\n", str);
    }

    // Cas 3 : Chevauchement (src avant dest)
    {
        char str[] = "abcdefg";

        ft_memmove(str + 3, str, 3); // Déplacer "abc" à partir de str[3]
        printf("Cas 3 - Chevauchement (src avant dest) : str = %s\n", str);
    }

    // Cas 4 : Déplacer une portion du tableau à l'intérieur de lui-même avec chevauchement exact
    {
        char str[] = "1234567890";

        ft_memmove(str + 5, str, 5); // Déplacer "12345" vers str[5]
        printf("Cas 4 - Chevauchement exact : str = %s\n", str);
    }

    // Cas 5 : Copier une portion du tableau sur elle-même (même source et destination)
    {
        char str[] = "abcdefgh";

        ft_memmove(str, str + 4, 4); // Déplacer "abcd" vers le début du tableau
        printf("Cas 5 - Même source et destination (copie de la même zone) : str = %s\n", str);
    }

    // Cas 6 : Vérification d'un cas où src et dest sont égaux
    {
        char str[] = "hello";
        
        ft_memmove(str, str, 5); // Test où la source et la destination sont identiques
        printf("Cas 6 - src et dest égaux : str = %s\n", str); // doit afficher "hello"
    }

    return 0;
}
