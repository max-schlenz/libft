/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:23:40 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 15:09:10 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t k;
    size_t cNeedle;
    
    i = 0;
    j = 0;
    k = 0;
    cNeedle = ft_strlen(needle);
    
    while (i < len) //&& i < cNeedle)
    {
        if (haystack[i] == needle[j])
            j++;

        if (j == cNeedle)
            {
            return ((char *)haystack - cNeedle + i + 1);
            }
        i++;
    }
    return 0;
}

/*
int main(void)
{
    char a[] = "aabzabbaaa";
    char b[] = "za";
    printf("%s\n", strnstr(a, b, 7));
    printf("%s\n", ft_strnstr(a, b, 7));
}
*/