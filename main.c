/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:02:19 by iharile           #+#    #+#             */
/*   Updated: 2021/11/12 18:04:10 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f(unsigned int i, char *s)
{
	char	c;

	c = i + s[i];
	write (1, &c, 1);
}

int	main(void)
{
	//ft_striteri ("override this !", f);
	return (0);
}
