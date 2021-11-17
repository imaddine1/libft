/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:02:19 by iharile           #+#    #+#             */
/*   Updated: 2021/11/17 19:48:15 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*f(void *rep)
{
	rep = "im ok";
	return (rep);
}

void	del(void *rem)
{
	free (rem);
}

int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*new;

	first = malloc (sizeof(t_list));
	second = malloc (sizeof(t_list));
	third = malloc (sizeof(t_list));
	first->content = "f1";
	second->content = "f2";
	third->content = "f3";
	first->next = second;
	second->next = third;
	third->next = NULL;
	new = ft_lstmap(first, f, del);
	while (new)
	{
		printf ("%s\n", new->content);
		new = new->next;
	}
}
