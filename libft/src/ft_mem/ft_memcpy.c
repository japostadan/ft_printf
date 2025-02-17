/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:30:16 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 18:30:28 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_memcpy - Copies memory area
* dst: Destination memory
* src: Source memory
* n: Number of bytes
* Returns: Pointer to destination
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    if (!dst || !src || dst == src)
        return (dst);
	char		*d;
	const char	*s;
	size_t		i;

	s = src;
	d = dst;
	i = 0;
	while (i < n)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}
