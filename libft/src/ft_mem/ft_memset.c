/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:00:10 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 19:00:27 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_memset - Fills memory with constant byte
* b: Memory area
* c: Value to set
* len: Number of bytes
* Returns: Pointer to memory area
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
    
	ptr = (unsigned char *)b;
	while (len--)
	{
		*ptr++ = c;
	}
	return (b);
}
