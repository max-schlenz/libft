/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:39:37 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 15:08:45 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    size_t cS;
    
    i = 0;
    cS = 0;
    
    while (i < n)
    {
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            {
            cS = (cS + (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
            return cS;
            }
        i++;
    }
    return 0;
}

/*
int main(void)
{
    char a[] = "udaa";
    char b[] = "g87gA";
    int n = 4;
    printf("Original: %d\n", memcmp(a, b, n));
    printf("%d\n", ft_memcmp(a, b, n));
}
*/