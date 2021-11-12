/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:46:03 by iharile           #+#    #+#             */
/*   Updated: 2021/11/12 13:06:30 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= (-1);
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_swap(char *s)
{
	int		i;
	int		j;
	char	temp;

	i = strlen(s) - 1;
	if (s[0] == '-')
		j = 1;
	else
		j = 0;
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
	return (s);
}

static char	*ft_putnbr(long n, int digit)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc ((digit + 1) * sizeof(char));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n *= (-1);
	}
	while (n > 0)
	{
		str[i] = n % 10 + 48;
		i++;
		n /= 10;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		digit;
	char	*str;
	int		i;
	long	nb;

	nb = n;
	i = 0;
	if (nb == 0)
	{
		str = malloc (2 * sizeof(char));
		if (!str)
			return (0);
		str[0] = 48;
		str[1] = '\0';
		return (str);
	}
	digit = count_digit(nb);
	str = ft_putnbr (nb, digit);
	ft_swap(str);
	return (str);
}
