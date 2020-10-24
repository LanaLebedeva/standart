/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:45:00 by lana              #+#    #+#             */
/*   Updated: 2020/10/21 20:11:43 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: The  strcat()  function appends the src string to the         */
/* dest string, overwriting the terminating null byte ('\0') at the end       */
/* of dest, and then adds a terminating null byte.  The strings               */
/* may not overlap, and the dest string must have enough space for the result.*/
/* If dest is not large enough, program behavior is unpredictable;            */
/* buffer overruns are a favorite avenue for attacking secure programs.       */

/* RETURN VALUE: The strcat() functions return a pointer to                   */
/* the resulting string dest.												  */

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
	*dest = '\0';
	return (temp);
}
