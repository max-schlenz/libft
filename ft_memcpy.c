/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:26:25 by mschlenz          #+#    #+#             */
/*   Updated: 2022/04/01 11:06:23 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    
    i = 0;

    while (i < n && (dst != NULL || src != NULL))
    {
        ((char *)dst)[i] = ((char *)src)[i];
        i++;
    }
    return (dst);
}
/*
int main(void)
{
    char dst[] = "aaaaaaaaaa";
    char src[] = "bbbbbbbbbb";
    printf("%s\n", ft_memcpy(dst, src, 3));
    printf("%s\n", memcpy(dst, src, 3));

}
*/