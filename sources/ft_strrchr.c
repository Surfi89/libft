/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:09:42 by ajordan-          #+#    #+#             */
/*   Updated: 2021/07/27 11:27:55 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;

	ini = s;
	i = 0;
	while (s[i] != 0)
		i++;
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (*s == c)
		return ((char *)s);
	return (0);
}
