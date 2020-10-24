/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 18:32:02 by lana              #+#    #+#             */
/*   Updated: 2020/10/23 19:02:40 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION: The strrchr() function locates the last occurrence of c (converted to a char) 
 * in the string pointed to by s.  The terminating null character is considered to be part 
 * of the string; therefore if c is `\0' , the functions locate the terminating `\0'. 
 *
 * RETURN VALUES: The function  strrchr() return a pointer to the located character, 
 * or NULL if the character does not appear in the string.
 *
 */

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while(*s != '\0')
	{
		if (*s == (char)c)
			result = (char *) s;
		s++;
	}
	return result;
}
