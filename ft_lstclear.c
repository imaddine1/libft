/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:52:27 by iharile           #+#    #+#             */
/*   Updated: 2021/11/17 14:12:09 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
//	t_list	*temp;
	t_list	*current;

//	temp = *lst;
	while (*lst)
	{
		current = *lst;
		(*del)((*lst)->content);
		*lst = (*lst)->next;
		free (current);
	}
//	*lst = NULL;
}
