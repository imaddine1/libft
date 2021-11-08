/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:22:16 by iharile           #+#    #+#             */
/*   Updated: 2021/11/08 12:46:03 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	p = malloc (sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	while (s1[i])
	{	
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
		p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}
