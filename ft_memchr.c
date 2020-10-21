/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 20:33:45 by lana              #+#    #+#             */
/*   Updated: 2020/10/16 20:52:42 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*start;

	start = (unsigned char *)s;
	if (n)
    {
        while (n--)
	    {
		    if (*start == (unsigned char)c)
			    return (void *)start;
		    start++;
	    }
    }
	return (NULL);
}
	


