/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:16:31 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 15:08:15 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
    {
    size_t i;
    
    i = 0;
    
    while (i < n)
        {
        ((char *)s)[i] = '\0';
        i++;
        }
    }
/*
int main(void)
    {
    char a[] = "aaaaa";
    ft_bzero(a, 3);
    }
*/