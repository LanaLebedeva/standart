/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:59:11 by lana              #+#    #+#             */
/*   Updated: 2020/10/21 17:28:53 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* DESCRIPTION: The strlen() function calculates the length of the string 	  */
/* pointed to by s, excluding the terminating null byte ('\0').				  */
/*																			  */
/* RETURN VALUE: The strlen() function returns the number of characters in	  */
/* the string pointed to by s (terminating NUL character).                    */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*start;

	if (s)
	{
		start = s;
		while (*(start) != '\0')
			start++;
		return (start-s);
	}
	return (0);
}
