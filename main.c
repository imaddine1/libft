/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:02:19 by iharile           #+#    #+#             */
/*   Updated: 2021/11/16 20:42:02 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct node
// {
// 	int 			data;
// 	struct	node	*next;
// }		t_node;


// void	lstadd_back(t_node **lst, t_node *new)
// {
// 	t_node	*temp;

// 	temp = *lst;
// 	if (temp != NULL)
// 	{
// 		while (temp->next != NULL)
// 			temp = temp->next;
// 		temp->next = new;
// 		new->next = NULL;
// 	}
// 	else
// 		*lst = new;
// }
int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	// t_node *first;
	// t_node *second;
	// t_node *third;
	// t_node *new;
	a = malloc (sizeof(t_list));
	a->content = "imad";
	b = malloc (sizeof(t_list));
	b->content = "harile";
	b->next = NULL;
	a->next = b;
	c = malloc (sizeof (t_list));
	c->content = "this new";
	c->next = NULL;
// 	first = malloc(sizeof(t_node));
// 	second = malloc(sizeof(t_node));
// 	third = malloc(sizeof(t_node));
// 	new = malloc(sizeof(t_node));
// 	head = &first;
// 	first->data = 10;
// 	second->data = 20;
// 	third->data = 30;
// 	new->data = 42;
// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;
	ft_lstadd_back(&a, c);
	t_list *curr;
	curr = a;
	while (curr)
	{
		printf ("%s\n", (curr->content));
		curr = curr->next;
	}
	return (0);
}
