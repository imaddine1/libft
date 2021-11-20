/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:02:19 by iharile           #+#    #+#             */
/*   Updated: 2021/11/20 15:21:35 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *p = calloc(1, 5);
	printf ("%d\n", (char)p[0]);
	printf ("%d\n", (char)p[1]);
	printf ("%d\n", (char)p[2]);
	printf ("%d\n", (char)p[3]);
	printf ("%d\n", (char)p[4]);
	return (0);
}
