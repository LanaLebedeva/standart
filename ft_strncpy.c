/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:25:57 by lana              #+#    #+#             */
/*   Updated: 2020/10/21 19:32:24 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: The  strncpy()  function is similar of strcpy, except that    */
/* at most n bytes of src are copied.  Warning: If there is no null byte      */
/* among the first n  bytes of src, the string placed in dest will not        */
/* be null-terminated.                                                        */
/* If  the  length of src is less than n, strncpy() writes additional null    */
/* bytes to dest to ensure that a total of n bytes are written.               */

/* RETURN VALUE: The strncpy() function return a pointer to                   */
/* the  destination string dest.                                              */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
