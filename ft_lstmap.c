/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:58:24 by iharile           #+#    #+#             */
/*   Updated: 2021/11/17 21:37:01 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	//new = malloc (sizeof(t_list));
	//if (!new)
	//	return (0);
	new->content = f(new->content);
	new->next = lst;
	temp = lst;
	while (temp)
	{
		if (!temp)
			(*del)(temp->content);
		temp->content = (*f)(temp->content);
		temp = temp->next;
	}
	return (new);
}
