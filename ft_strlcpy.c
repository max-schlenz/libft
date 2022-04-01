/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:18:16 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 18:44:22 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t cSrc;

    i = 0;
    cSrc = 0;

    cSrc = ft_strlen(src);
    
    if (dstsize != 0)
    {
        while (i < dstsize - 1 && src[i] != '\0')
            {
                dst[i] = src[i];
                i++;
            }
        
        dst[i] = '\0';
    }
    return (cSrc);
}
/*
int main(void)
{
    char b[] = "aaaaaaaaaaa";
    char b2[] = "bbbbbbbbbb";
    printf("%d\n", ft_strlcpy(b, b2, 5));
    printf("%d\n", strlcpy(b, b2, 5));
}
*/