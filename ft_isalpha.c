/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:16:31 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 14:42:26 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
    {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
            return 1;
        return 0;
    }

/*
#include <stdio.h>

int main(void)
    {

        int t;
        t = ft_isalpha('%');

        printf("%d", t);
    }

    */