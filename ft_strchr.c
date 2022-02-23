/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:04:36 by plouie            #+#    #+#             */
/*   Updated: 2021/10/27 15:04:38 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*s;
	char	c;

	c = (char)ch;
	s = (char *)str;
	while (*s != c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return (s);
}
