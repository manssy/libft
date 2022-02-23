/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:05:29 by plouie            #+#    #+#             */
/*   Updated: 2021/10/27 15:05:30 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string_b, const char *string_a, size_t n)
{
	size_t	i;
	size_t	j;
	char	*dst;
	char	*src;

	i = 0;
	dst = (char *)string_b;
	src = (char *)string_a;
	if (*src == '\0' || src == NULL)
		return (dst);
	while (dst[i] && i < n)
	{
		j = 0;
		while (src[j] == dst[i + j] && i + j < n)
		{
			if (src[j + 1] == '\0')
				return (dst + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
