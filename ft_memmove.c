/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:55:41 by lana              #+#    #+#             */
/*   Updated: 2020/10/16 20:31:11 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *dest_temp;
    const unsigned char *src_temp;

    if (n && src && dest && (dest != src))
    {
        dest_temp = (unsigned char *)dest;
        src_temp = (const unsigned char *)src;

        n--;
        if (&dest_temp[n] <  &src_temp[n])
        {
            while (n--)
                *(dest_temp++) = *(src_temp++);
        }
        else
        {
            while (n--)
                dest_temp[n] = src_temp[n];
        }
    }
    return (dest);
}
