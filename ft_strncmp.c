/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:39:37 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 15:10:33 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t cS;
    
    i = 0;
    cS = 0;
    
    while (i < n)
    {
        if (s1[i] != s2[i])
            {
            cS = (cS + (s1[i] - s2[i]));
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
    char b[] = "ggA";
    printf("Original: %d\n", strncmp(a, b, 3));
    printf("%d\n", ft_strncmp(a, b, 3));
}
*/