/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:16:31 by mschlenz          #+#    #+#             */
/*   Updated: 2022/03/30 14:42:41 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
    {
        if ((c >= 32) && (c <= 126))
            return 1;
        return 0;
    }

/*

#include <stdio.h>

int main(void)
    {

        int t;
        t = ft_isprint('(');

        printf("%d", t);
    }

    */