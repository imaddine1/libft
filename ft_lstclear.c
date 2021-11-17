/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:52:27 by iharile           #+#    #+#             */
/*   Updated: 2021/11/17 13:27:41 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*current;

	temp = *lst;
	while (temp->next)
	{
		current = temp;
		(*del)(temp->content);
		temp = temp->next;
		free (current);
	}
//	free(temp);
//	temp = NULL;
}
