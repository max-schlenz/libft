/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:26:25 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 18:01:35 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    char *bufDst;
    i = 0;

    bufDst = ((char *)dst);

    if (dst == src)
        return (dst);
    
    else if (dst < src)
    {
        while (i < len)
        {
            ((char *)bufDst)[i] = ((char *)src)[i];
            i++;
        }
    }
    else
    {
        i = len;
        while (i > 0)
        {
            i--;
            ((char *)bufDst)[i] = ((char *)src)[i];
        }
        
    }
    return (bufDst);
}

/*
int main(void)
{
    //char dst[] = "lorem ipsum dolor sit amet";
    char src[] = "lorem ipsum dolor sit amet";
    char *dst = NULL;
    dst = src + 1;
    int n = 8;
    printf("%s\n", ft_memmove(dst, src, n));
    printf("%s\n", memmove(dst, src, n));

}
*/