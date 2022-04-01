/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:39:37 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/31 11:26:23 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = 0;
      
    while (s[i] != c)
    {
    if (s[i] == '\0')
        return (0);
    i++;
    }
    
    return ((char *)s + i);
    
    /*()
    if (s == '\0' || c == '\0')
        return ((char *)'\0');
    
    i = ft_strlen(s) - 1;
    
    while (s[i] != c)
    {
    if (s[i] == '\0')
        return 0;
    i--;
    }
    
    return ((char *)s + i);
    */
}

/*
int main(void)
{
        char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
        char *d1 = strrchr(src, '\0');
        char *d2 = ft_strrchr(src, '\0');
}
*/

/*
int main(void)
{
    char s[] = "aababaa";
    int c = 'b';
    printf("%s\n", strrchr(s, c));
    printf("%s\n", ft_strrchr(s, c));
}
*/