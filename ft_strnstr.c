/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 19:12:21 by lana              #+#    #+#             */
/*   Updated: 2020/10/23 19:18:29 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION: The strnstr() function locates the first occurrence
 * of the null-terminated string s2 in the string s1, where not more
 * than n characters are searched.  Characters that appear after
 * a `\0' character are not searched.  Since the strnstr() function
 * is a FreeBSD specific API, it should only be used when portability
 * is not a concern.
 *
 * RETURN VALUES: If s2 is an empty string, s1 is returned;
 * if s2 occurs nowhere in s1, NULL is returned; otherwise
 * a pointer to the first character of the first occurrence
 * of s2 is returned.
*/

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int     result;
	int     i;
    int     j;
	int		n_int;

	result = -1;
	n_int = (int)n;
    if (s2[0] == '\0')
       return ((char*)s1);
    i = 0;
    while (s1[i] != '\0')
    {
   		j = 0;
        while (s1[i] == s2[j] && j < n_int && s2[j] !='\0')
        {
			if (result == -1)
				result = i;
			i++;
			j++;
		}
        if (result != -1 &&  s2[j] == '\0')
			return ((char*) &s1[result]);
		else if (result != -1)
        {
			i = result;
			j = 0;
			result = -1;
		}
		i++;
	}
    return (NULL);
}
