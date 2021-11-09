/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:33:15 by iharile           #+#    #+#             */
/*   Updated: 2021/11/09 18:25:29 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_str(char *s, char *set)
{
	int		i;
	size_t	not;
	int		j;

	j = 0;
	not = 0;
	i = 0;
	while (set[i])
	{
		if (s[0] == set[i])
			s[0] = -10;
		else
			not++;
		i++;
	}
	if (not == strlen(set))
		return (0);
	return (s);
}

char	*display(char *s)
{
	size_t	i;
	char	*ptr;
	size_t	j;
	size_t	d;

	d = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != -10)
			d++;
		i++;
	}
	ptr = malloc ((d + 1) * sizeof(char));
	d = 0;
	j = 0;
	while (j < i)
	{
		if (s[j] != -10)
			ptr[d++] = s[j];
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	char	*find;

	find = (char *)set;
	i = 0;
	s = (char *)s1;
	while (s[i])
	{
		if (check_str(&s[i], find) != NULL)
			i++;
		else
			break ;
	}
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (check_str(&s[i], find) != NULL)
			i--;
		else
			break ;
	}
	s = display(s);
	return (s);
}
