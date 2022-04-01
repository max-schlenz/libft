/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:39:37 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/31 11:02:25 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((unsigned char *)s + i);
        i++;
    }
    
    return (0);
}

/*
int main(void)
{
    char s[] = "0123456";
    int c = '2';
    printf("%s\n", memchr(s, c, 4));
    printf("%s\n", ft_memchr(s, c, 4));
}
*/