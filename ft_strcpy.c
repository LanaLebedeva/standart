/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:55:23 by lana              #+#    #+#             */
/*   Updated: 2020/10/21 19:24:12 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ESCRIPTION:  The  strcpy()  function  copies the string pointed to by src, */
/* including the terminating null byte ('\0'), to the buffer  pointed  to     */
/* by  dest. The  strings  may  not overlap, and the destination string dest  */
/* must be large enough to receive the copy.  Beware  of  buffer  overruns!   */
/* (See BUGS.)																  */

/* RETURN VALUE: The strcpy() functions return a pointer to  the  			  */
/* destination string dest.													  */

/* BUGS: If the destination string of a strcpy() is not large enough, 		  */
/* then  anything  might  happen.   Overflowing  fixed-length  string  buffers*/
/* is a favorite cracker technique for taking complete control of the  machine*/
/* Any  time  a  program  reads  or copies data into a buffer, the program    */
/* first needs to check that there's enough space.  This may  be  unnecessary */
/* if you can show that overflow is impossible, but be careful: programs can  */
/* get changed over time, in ways that may make  the  impossible possible     */


#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*temp;

	temp = dest;
	while (*src)
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';
	return temp;
}
