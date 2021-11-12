/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:02:19 by iharile           #+#    #+#             */
/*   Updated: 2021/11/12 12:13:17 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	// char str1[] = "\0aa\0bbb";
	// char str2 = '\0';
	// char **p= ft_split(str1, str2);
	// size_t i;
	// i = 0;
	// while (p[i])
	// {
	// 	printf ("%s\n", p[i]);
	// 	i++;
	// }
	//printf ("%d\n", strcmp(ft_strtrim(str1, " \n\t"), str2));
	printf("%s\n", ft_itoa(-1234));
	return (0);
}
