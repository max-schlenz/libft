/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:57:24 by mschlenz          #+#    #+#             */
/*   Updated: 2022/04/01 13:56:13 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include <string.h>
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t dstLen;
    size_t srcLen;
    
    i = 0;
    
    srcLen = ft_strlen((char *)src);
    dstLen = ft_strlen((char *)dst);
    
    while (i < dstsize)
    {
        dst[dstLen + i] = ((char *)src)[i];
        //dst[i] = src[i];
        i++;
    }
    
    dst[dstLen + dstsize] = '\0';

    printf("%s\n", dst);
    
    return ((ft_strlen((char *)dst)));
}

int main(void)
{
    //char *dst;
    char dst[] = "aaaaa";
    char src[] = "bbb";
    size_t n = 2;
    //printf("%zu\n", ft_strlcat("aaaaaaaaa", "bbbb", 3));
    //printf("%zu\n", strlcat("aaaaaaaaa", "bbbb", 3));
    printf("   strlcat: %lu\n", strlcat(dst, src, n));
    printf("ft_strlcat: %lu\n", ft_strlcat(dst, src, n));
}
    /*
    size_t i;
    
    
    size_t i;
    int cDst;
    int cSrc;
    int j;
    
    i = 0;
    cDst = ft_strlen(dst);
    cSrc = ft_strlen(src);

    while (dst[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (j < dstsize)
    {
        dst[i] = src[j];
        j++;
    }

dst[i + j + 1] = '\0';
printf("%s\n", dst);
    //while()
    
    while (i < dstsize && src[i] != '\0')
        {
            dst[cDst + i] = src[i];
            i++;
        }
    dst[cDst + i] = '\0';
    
    return (cDst + cSrc);
*/