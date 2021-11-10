/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:02:19 by iharile           #+#    #+#             */
/*   Updated: 2021/11/10 12:49:54 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char str1[] = "  \t \t \n  \n\n\n\t";
//	char str2[] = "Hello \t  Please\n Trim me !";
	printf("%s\n", ft_strtrim(str1, " \n\t"));
	//printf ("%d\n", strcmp(ft_strtrim(str1, " \n\t"), str2));
	return (0);
}
