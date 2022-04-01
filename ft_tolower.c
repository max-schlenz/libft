/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:40:50 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 14:41:03 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return c;
}

/*
int main(void)
{
    int i = 65;
    
    while (i >= 65 && i <= 90)
        {
        printf("%c >> %c\n", i, ft_tolower(i));
        i++;
        }
}
*/