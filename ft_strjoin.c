/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:13:18 by mschlenz          #+#    #+#             */
/*   Updated: 2022/04/07 19:26:39 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	str = malloc((ft_strlen(s1)) + (ft_strlen(s2)) + 1);
	if (!str)
		return (0);
	while (i < (ft_strlen(s1)))
	{
		str[i] = s1[i];
		i++;
	}
	while (i < ((ft_strlen(s1)) + (ft_strlen(s2))))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
