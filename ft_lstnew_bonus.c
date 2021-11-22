/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 08:57:30 by iharile           #+#    #+#             */
/*   Updated: 2021/11/22 11:14:13 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*x;

	if (!content)
		return (0);
	x = malloc (sizeof(t_list));
	if (!x)
		return (0);
	x->content = content;
	x->next = NULL;
	return (x);
}
