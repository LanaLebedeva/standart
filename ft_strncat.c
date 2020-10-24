/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:24:08 by lana              #+#    #+#             */
/*   Updated: 2020/10/21 20:29:31 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: The strncat() function is similar of the strcat(), except that*/
/* 	*  it will use at most n bytes from src; and                              */
/*	*  src does not need to be null-terminated if it  contains  n  or  more   */
/*         bytes.                                                             */
/*     If src contains n or more bytes, strncat() writes n+1 bytes to dest  (n*/
/*     from  src plus the terminating null byte).  Therefore, the size of dest*/
/*     must be at least strlen(dest)+n+1.                                     */

/* RETURN VALUE: The strncat() function return a pointer to the  resulting    */
/*     string dest.															  */


#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src != '\0'  && 0 < n)
        {
                *dest = *src;
                dest++;
                src++;
		n--;
        }
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	*dest = '\0';
        return (temp);
}
