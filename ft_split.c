/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:04:55 by iharile           #+#    #+#             */
/*   Updated: 2021/11/11 18:55:55 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc_str(int col, int lig)
{
	int		i;
	int		j;
	char	**p;

	i = 0;
	j = 0;
//	printf ("col == %d , lignes == %d\n", col, lig);
	i = 0;
	p = malloc ((lig + 1) * sizeof(char *));
	while (i < lig)
	{
		if (!p)
			return (0);
		else
			p[i] = malloc (col * sizeof(char));
		i++;
	}
	p[i][0] = '\0';
	return (p);
}

char	**edit(char *s, char c, char **p, size_t i)
{
	int	j;
	int	d;

	d = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
			p[d][j++] = s[i++];
		else
		{
			while (i < ft_strlen(s))
			{
				if (s[i] == c)
				{
					p[d][j] = '\0';
					i++;
				}
				else
					break ;
			}
			d++;
			j = 0;
		}
	}
	p[d][j] = '\0';
	return (p);
}

char	**ft_split2(char const *s, char c)
{
	char	**p;
	size_t	i;
	int		lig;
	int		col;

	i = 0;
	lig = 0;
	col = 0;
	if (c == '\0')
	{
		p = malloc(1 * sizeof(char *));
		p[0] = (char *)s;
		return (p);
	}	
	while (i < ft_strlen(s))
		if (s[i++] != c)
			col++;
	i = 0;
	while (i < ft_strlen(s))
	{	
		if (s[i] != c && (s[i - 1] == c || !s[i - 1]))
			lig++;
		i++;
	}
	p = alloc_str(col, lig);
	i = 0;
	p = edit((char *)s, c, p, i);
	return (p);
}
