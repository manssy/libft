/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:19:31 by plouie            #+#    #+#             */
/*   Updated: 2021/11/12 18:19:33 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*struc;

	struc = malloc(sizeof(t_list));
	if (!struc)
		return (NULL);
	struc->content = content;
	struc->next = NULL;
	return (struc);
}
