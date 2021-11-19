/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:58:24 by iharile           #+#    #+#             */
/*   Updated: 2021/11/19 09:30:07 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	t_list	*another;
	t_list	*head;

	if (!lst)
		return (0);
	new = ft_lstnew(f(lst->content));
	head = new;
	temp = lst->next;
	while (temp)
	{
		another = ft_lstnew(f(temp->content));
		if (!another || !new)
			break ;
		ft_lstadd_back(&new, another);
		temp = temp->next;
	}
	if (!another || !new)
		(*del)(new->content);
	return (head);
}
