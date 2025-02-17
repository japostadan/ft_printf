/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:36:35 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 18:37:46 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_strlcat - Concatenates strings with size limitation
* dst: Destination buffer
* src: String to append
* size: Total size of destination buffer
* Returns: Total length of attempted string
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    if (!dst || !src)
    {
        return (0);
    }
	size_t	dst_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
    {
		return (size + ft_strlen(src));
    }
	while (src[i] && (dst_len + i + 1) < size)
	{
		dst[dst_len + 1] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}
