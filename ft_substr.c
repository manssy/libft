/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:57:47 by plouie            #+#    #+#             */
/*   Updated: 2021/10/27 19:57:48 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fail_start(void)
{
	char	*array;

	array = (char *)malloc(sizeof(char));
	if (!array)
		return (NULL);
	array[0] = '\0';
	return (array);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			strlen;
	char			*array;

	i = 0;
	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (strlen < start)
		return (fail_start());
	if (len > strlen - start)
		len = strlen - start;
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	while (i < len)
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
