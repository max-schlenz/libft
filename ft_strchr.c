/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:39:37 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 14:40:07 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
      
    while (s[i] != c)
    {
    if (s[i] == '\0')
        return 0;
    i++;
    }
    
    return ((char *)s + i);
}

/*
int main(void)
{
    char s[] = "12345/6";
    int c = '3';
    printf("%s\n", strchr(s, c));
    printf("%s\n", ft_strchr(s, c));
}
*/