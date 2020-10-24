/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:06:01 by lana              #+#    #+#             */
/*   Updated: 2020/10/24 15:44:06 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && (str1[i] != '\0') && (str2[i] !='\0') &&
		i < n)
	{
		i++;
	}
	return ((unsigned char)str1[i - 1] - (unsigned char)str2[i - 1]);
}