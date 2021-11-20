/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:02:19 by iharile           #+#    #+#             */
/*   Updated: 2021/11/20 10:04:15 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str = "aa bb cc dd ll kk hh ff dd ssa  ";
	char **sp = ft_split(str, ' ');
	int	i = 0;
	while (sp[i])
	{
		printf ("%s\n", sp[i]);
		i++;
	}
	
	return (0);
}

