/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:11:24 by lana              #+#    #+#             */
/*   Updated: 2020/10/24 20:49:17 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == 'r' || c == '\t' ||
		c == '\v')
		return (1);
	return (0);
}

int			ft_atoi(const char *nptr)
{
	int			sign;
	long long	result;

	sign = 1;
	result = 0;
	while (ft_isspace((int)*nptr))
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
	}
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (result <= INT_MAX / 10)
		{
			result = result * 10;
			if (result <= INT_MAX - (*nptr -'0'))
					result += *nptr - '0';
			else if ((sign == -1) && ((-1)*result == INT_MIN + (*nptr - '0')))
				return (INT_MIN);
			else
				return 0;
		}
		else
			return(0);
		nptr++;
	}
	return ((int)(sign*result));
}
