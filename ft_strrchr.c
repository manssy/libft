/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:05:40 by plouie            #+#    #+#             */
/*   Updated: 2021/10/27 15:05:41 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	c;
	char	*s;
	char	*res;

	c = (char)ch;
	s = (char *)str;
	res = NULL;
	if (c == '\0')
		return (s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			res = s;
		s++;
	}
	return (res);
}
