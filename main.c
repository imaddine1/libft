/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:02:19 by iharile           #+#    #+#             */
/*   Updated: 2021/11/11 19:00:24 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char str1[] = ",,,imadharile,aaa,";
	char str2 = ',';
	char **p= ft_split(str1, str2);
	size_t i;
	i = 0;
	while (p[i])
	{
		printf ("%s\n", p[i]);
		i++;
	}
		//printf ("%d\n", strcmp(ft_strtrim(str1, " \n\t"), str2));
	return (0);
}
