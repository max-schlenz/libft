/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:36:44 by mschlenz          #+#    #+#             */
/*   Updated: 2022/04/13 17:46:45 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			i;
	unsigned int	j;

	if (!s || !f)
		return ;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		f(j, &s[i]);
		j++;
		i++;
	}
	s[i] = '\0';
}
