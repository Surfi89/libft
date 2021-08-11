/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 09:22:58 by ajordan-          #+#    #+#             */
/*   Updated: 2021/07/28 12:08:05 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	start2;
	size_t	len2;

	if (!s || len == 0)
		return (0);
	s2 = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s2)
		return (0);
	start2 = start;
	len2 = 0;
	while (start2 < ft_strlen(s) && len2 < len)
	{
		s2[len2] = s[start2];
		len2++;
		start2++;
	}
	s2[len2] = 0;
	return (s2);
}
