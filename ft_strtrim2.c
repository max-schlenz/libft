/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschlenz <mschlenz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:23:01 by mschlenz          #+#    #+#             */
/*   Updated: 2022/04/09 19:06:55 by mschlenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	calc_str_size(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	c;

	i = 0;
	j = 0;
	c = 0;
	while (set[j] != '\0')
	{
		while (s1[i] != '\0')
		{
			if (s1[i] == set[j])
				c++;
			i++;
		}
	i = 0;
	j++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	m;
	size_t	len_s1;
	char	*str;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	m = calc_str_size(s1, set);
	str = malloc((len_s1 - m) + 1);
	while (s1[i] != '\0')
	{
		if (!(is_in_set(s1[i], set)))
		{
		str[j] = s1[i];
		j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

#include "ft_strlen.c"

int main(void)
{
	char	*s1 = "aaabbabbbaaa";
	char	*set = "a";

//	char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n";
//	char	*set = " \n\t";
	char	*result = ft_strtrim(s1, set);
	printf("\ns1     = %s\nset    = %s\nresult = %s\n\n", s1, set, result);
}