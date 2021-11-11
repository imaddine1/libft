/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:38:46 by iharile           #+#    #+#             */
/*   Updated: 2021/11/11 19:33:14 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	counter_word(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			counter++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counter);
}

int	counter_alpha(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	*convert(char const *s, int j)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc((j + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] && i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		cnt_word;
	char	**str;

	i = 0;
	k = 0;
	cnt_word = counter_word(s, c);
	str = malloc((cnt_word + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] && s[i] != c)
		{
			j = counter_alpha(s + i, c);
			str[k++] = convert(s + i, j);
		}
		while (s[i] && s[i] != c)
			i++;
	}
	str[k] = 0;
	return (str);
}
