/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 19:03:36 by lana              #+#    #+#             */
/*   Updated: 2020/10/23 19:12:10 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  DESCRIPTION:  The strstr() function locates the first occurrence
 *  of the null-terminated string s2 in the null-terminated string s1.
 *
 * RETURN VALUES: If s2 is an empty string, s1 is returned;
 * if s2 occurs nowhere in s1, NULL is returned;
 * otherwise a pointer to the first character
 * of the first occurrence of s2 is returned.
 *
*/

char    *ft_strstr(const char *s1, const char *s2)
{
        int     result;
        int     i;
        int     j;

        result = -1;
        if (s2[0] == '\0')
                return ((char*)s1);
        i = 0;
        while (s1[i] != '\0')
        {
                j = 0;
                while (s1[i] == s2[j] && s2[j] !='\0')
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
