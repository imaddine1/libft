/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 07:51:40 by iharile           #+#    #+#             */
/*   Updated: 2021/11/08 10:13:16 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	char	*s2;
	size_t	j;

	j = 0;
	i = (size_t)start;
	str = (char *)s;
	s2 = malloc (len * sizeof(char));
	if (s2 == NULL)
		return (0);
	while (str[i] && j < len)
	{
		s2[j] = str[i];
		j++;
		i++;
	}
	s2[j] = '\0';
	return (s2);
}
