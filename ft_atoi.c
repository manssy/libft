/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:02:59 by plouie            #+#    #+#             */
/*   Updated: 2021/10/27 15:03:02 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\v'
		|| ch == '\r' || ch == '\n' || ch == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sing;
	int				count;
	long long int	res;

	i = 0;
	res = 0;
	count = 0;
	sing = 1;
	while (check(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sing = -1;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		res = (res * 10) + (str[i++] - '0');
		if (++count > 19)
		{
			if (sing == -1)
				return (0);
			return (-1);
		}
	}
	return (res * sing);
}
