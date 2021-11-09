/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:02:19 by iharile           #+#    #+#             */
/*   Updated: 2021/11/09 18:44:13 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char str1[] = "   xxxtripouille";
	char str2[] = " x";

	printf("%s\n", ft_strtrim(str1, str2));
	printf("%s\n", str1);
	printf("%s\n", str2);
	return (0);
}
