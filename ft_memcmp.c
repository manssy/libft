/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:03:59 by plouie            #+#    #+#             */
/*   Updated: 2021/10/27 15:04:01 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *array_1, const void *array_2, size_t n)
{
	unsigned char	*arr_1;
	unsigned char	*arr_2;
	size_t			i;

	i = 0;
	arr_1 = (unsigned char *)array_1;
	arr_2 = (unsigned char *)array_2;
	while (i < n)
	{
		if (arr_1[i] != arr_2[i])
			return (arr_1[i] - arr_2[i]);
		i++;
	}
	return (0);
}
