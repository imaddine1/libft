/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:57:33 by iharile           #+#    #+#             */
/*   Updated: 2021/11/06 17:49:47 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	char			temp[100000];
	size_t			i;

	if (len == 0)
		return ((unsigned char *)&dst[0]);
	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < 10)
	{
		temp[i] = s[i];
		i++;
	}	
	temp[i] = '\0';
	i = 0;
	while (i < len)
	{
		d[i] = temp[i];
		i++;
	}
	return (d);
}
