/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:35:29 by lana              #+#    #+#             */
/*   Updated: 2020/10/23 18:20:32 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION: The strlcat() function copy and concatenate strings           */
/* respectively.  It is designed to be safer, more consistent, and less error */
/* prone replacements  strncat(3).  Unlike this function, strlcat() take the  */
/* full size of the buffer (not just the length) and  guarantee to            */
/* NUL-terminate the result (as long as size is larger than 0 or, in the case */
/* of strlcat(), as long as there is at least one byte free in dst).          */
/* Note that a byte for the NUL should be included in  size.  Also note that  */
/* strlcat() only operate on true ``C'' strings.  This means that for         */
/* strlcpy() src must be NUL-terminated and for strlcat() both src and        */
/* dst must be NUL-terminated.                                                */

/* The strlcat() function appends the NUL-terminated string src to the end of */
/* dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating */
/* the result.                                                                */

/* The source and destination strings should not overlap, as the behavior is  */
/* undefined.                                                                 */

/* RETURN VALUES: The strlcat() functions return the total length of          */
/* the string they tried to create. For strlcat() that means the initial      */
/* length of dst plus the length of src.  While this may seem somewhat        */
/* confusing, it was done to make truncation detection simple.                */

/* Note however, that if strlcat() traverses size characters without finding  */
/* a NUL, the length of the string is considered to be size and               */
/* the destination string will not be NUL-terminated (since there was         */
/* no space for the NUL).  This keeps strlcat() from running off the end of a */
/* string.  In practice this should not happen (as it means that either size  */
/* is incorrect or that dst is not a proper ``C'' string). The check exists   */
/* to prevent potential security problems in incorrect code.                  */

/* strlcpy возвращает размер строки по адресу src. strlcat возвращает
* суммарную длину строк по адресам src и dst. Возвращаемое значение
* не зависит от того, удалось скопировать строку полностью или нет;
* это позволяет легко определить что буфер назначения слишком мал для
* копируемой строки.
*/
/*
 * Copy src to string dst of size siz.  At most siz-1 characters
 * will be copied.  Always NUL terminates (unless siz == 0).
 * Returns strlen(src); if retval >= siz, truncation occurred.
 */

/* не понятно, size это размер новой строки, или буфера, что надо прибавть к новой строке,
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	while (dst[count] && count < size)
                count++;
	size -= count;
	if (size)
	{
		while (*src != '\0'  && 0 < size)
        {
                dst[count] = *src;
                count++;
                src++;
                size--;
        }
        dst[count] = '\0';
	}
	return (count);
}
