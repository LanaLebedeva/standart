/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:30:30 by lana              #+#    #+#             */
/*   Updated: 2020/10/25 12:46:05 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*result;

	result = NULL;
	if (size)
	{
		result = (char *)malloc(sizeof(char)*size);
		if (result)
			ft_memset(result, '\0', size);
	}
	return ((void *)result);
}
