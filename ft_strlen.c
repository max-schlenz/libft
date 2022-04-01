/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:57:24 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 14:40:19 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(const char *c)
    {
        int i;
        i = 0;
        
        while (c[i] != '\0')
                i++;
        return i;      
    }


/*
#include <stdio.h>

int main(void)
    {

        int t;
        t = ft_strlen("hello");

        printf("%d", t);
    }

*/