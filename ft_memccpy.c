/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:47:13 by lana              #+#    #+#             */
/*   Updated: 2020/10/16 16:35:35 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
 	unsigned char	    *dest_temp;
	const unsigned char	*src_temp;

	dest_temp = (unsigned char *)dest;
	src_temp = (const unsigned char *)src;
    if (n && dest && src)
    {
    	while (n--)
	    {
		    *dest_temp = *src_temp;
		    if (*dest_temp == (unsigned char)c)
			    return (++dest_temp);
		    dest_temp++;
		    src_temp++;
	    }
    }
	return (NULL);
}





