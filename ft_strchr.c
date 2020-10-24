/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 18:27:14 by lana              #+#    #+#             */
/*   Updated: 2020/10/23 18:27:17 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION: The strchr() function locates the first occurrence of c (converted to a char) in the string pointed 
 * to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0', 
 * the functions locate the terminating `\0'. 
 *
 * RETURN VALUES: The functions strchr() return a pointer to the located character, or NULL if the character
 * does not appear in the string.
 */

char 	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = (char *)s;
	while(*result != '\0')
		if (*result == (char)c)
			return (result);
		else
			result++;
	return (NULL);
}
