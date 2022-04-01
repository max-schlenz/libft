/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:16:31 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/31 10:38:18 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
    {
        if (c < 0 || c > 127)
            return (0);
        return (1);
    }

/*
#include <stdio.h>

int main(void)
    {

        int t;
        t = ft_isascii('*');

        printf("%d", t);
    }

    */