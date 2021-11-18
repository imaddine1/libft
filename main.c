/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:02:19 by iharile           #+#    #+#             */
/*   Updated: 2021/11/18 21:02:45 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*first = NULL;
	t_list	*second = NULL;
	t_list	*new;
	t_list	*another;
	t_list	*fourth;

//	first = malloc (sizeof(t_list));
//	second = malloc (sizeof(t_list));
	new = malloc (sizeof(t_list));
	another = malloc(sizeof(t_list));
	fourth = malloc (sizeof(t_list));
//	first->content = (char *)"1";
//	second->content = (char *)"2";
//	first->next = second;
//	second->next = NULL;
	new->content = (char *)"3";
	new->next = NULL;
	another->content = (char *)"4";
	another->next = NULL;
	fourth->content = (char *)"5";
	fourth->next = NULL;
	ft_lstadd_back(&first, new);
	ft_lstadd_back(&first, another);
	ft_lstadd_back(&second, fourth);
	ft_lstadd_back(&first, second);
	printf ("%s\n", first->content);
	printf ("%s\n", first->next->content);
	printf ("%s\n", first->next->next->content);
//	printf ("%s\n", first->next->next->next->content);
//	printf ("%s\n", first->next->next->next->next->content);
	// while (first)
	// {
	// 	printf ("%s\n", first->content);
	// 	first = first->next;
	// }
}
