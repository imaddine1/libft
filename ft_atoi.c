/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:24:23 by iharile           #+#    #+#             */
/*   Updated: 2021/11/09 10:45:42 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	check_sign(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
			return (-1);
		else
			return (1);
	}
	return (0);
}

int	check_res(int s)
{
	if (s < 0)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	long int	res;
	int			sign;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (check_sign((char *)str) != 0)
	{
		sign *= check_sign((char *)str);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		if (res <= 2147483648)
			str++;
		else
			return (check_res(sign));
	}	
	return (res * sign);
}
