/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 21:06:57 by lana              #+#    #+#             */
/*   Updated: 2020/10/16 21:11:16 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*word1;
	unsigned char 	*word2;

    if (n)
    {
        word1 = (unsigned char *)s1;
        word2 = (unsigned char *)s2;
        while (n--)
        {
		    if (*word1++ != *word2++)
		        return (int)(*word1-*word2);
        }
    }
	return 0;
}
