/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:53:51 by iharile           #+#    #+#             */
/*   Updated: 2021/11/06 11:32:38 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	unsigned int	i;

	p = malloc(count * size);
	i = 0;
	if (p == NULL)
		return (0);
	while (i < (count * size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
