/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:35:33 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 19:11:52 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_strlcpy - Copies string with size limitation
* dst: Destination buffer
* src: Source string
* size: Size of destination buffer
* Returns: Length of source string
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (!src)
		return (0);
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
    if (!dst || size == 0)
        return (src_len);
    i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
		dst[i] = '\0';
	return (src_len);
}
