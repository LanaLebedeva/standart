/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:04:03 by lana              #+#    #+#             */
/*   Updated: 2020/10/16 16:16:41 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    unsigned char   *str;
    
    if (n && s)
    {
        str = (unsigned char *)s;
        while (n--)
            *(str++) = (unsigned char)c;
    }
    return (s);
}
