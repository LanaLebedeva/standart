/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:20:50 by lana              #+#    #+#             */
/*   Updated: 2020/10/21 17:50:48 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: The  strdup()  function  returns  a pointer to a new string   */
/* which is a duplicate of the string s.  Memory for the new string is        */
/* obtained with malloc(3), and can be freed with free(3).                    */

/* RETURN VALUE: On success, the strdup() function returns a pointer to       */
/* the duplicated string.  It returns NULL if insufficient  memory  was       */
/* available   															      */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_return;
	char	*s_return_start;
	size_t	length;

	s_return_start = NULL;
	if (s)
	{
		length = ft_strlen(s);
		s_return = (char *)malloc(sizeof(char)*length +1);
		if (s_return)
		{
			s_return_start = s_return;
			while (*s)
			{
				*(s_return++) = *(s++);
			}
			*s_return = '\0';
		}
	}
	return(s_return_start);
}
