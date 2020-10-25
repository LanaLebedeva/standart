/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:30:30 by lana              #+#    #+#             */
/*   Updated: 2020/10/25 13:35:39 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnew(size_t size)
{
	char	*result;

	result = NULL;
	if (size)
	{
		result = (char *)malloc(sizeof(char) * size + 1);
		if (result)
			ft_memset(result, '\0', size + 1);
	}
	return (result);
}
