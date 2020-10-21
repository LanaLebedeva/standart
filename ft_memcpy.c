/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:10:18 by lana              #+#    #+#             */
/*   Updated: 2020/10/16 16:22:14 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char       *dest_temp;
    const unsigned char *src_temp;

    dest_temp = (unsigned char *)dest;
    src_temp = (const unsigned char *)src;
    if (n)
    {
        while (n)
        {
            *(dest_temp++) = *(src_temp++);
            n--;
        }
    }
    return (dest);
}
