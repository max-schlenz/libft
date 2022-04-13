/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:26:25 by mschlenz          #+#    #+#             */
/*   Updated: 2022/04/07 19:11:29 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*buf_dst;

	i = 0;
	buf_dst = ((char *)dst);
	if (dst == src)
		return (dst);
	else if (dst < src)
	{
		while (i < len)
		{
			((char *)buf_dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
	i = len;
		while (i > 0)
		{
			i--;
			((char *)buf_dst)[i] = ((char *)src)[i];
		}
	}
	return (buf_dst);
}
