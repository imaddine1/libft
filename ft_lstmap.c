/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:58:24 by iharile           #+#    #+#             */
/*   Updated: 2021/11/18 15:57:25 by iharile          ###   ########.fr       */
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
	if (!new)
		(*del)(new->content);
	head = new;
	temp = lst->next;
	while (temp)
	{
		another = ft_lstnew(f(lst->content));
		if (!another)
			break ;
		ft_lstadd_back(&new, another);
		new = new->next;
		temp = temp->next;
	}
	if (!another)
		(*del)(new->content);
	return (head);
}
