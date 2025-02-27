/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:35:33 by japostad          #+#    #+#             */
/*   Updated: 2025/02/27 22:05:52 by japostad         ###   ########.fr       */
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
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (!src || !dst)
		return (0);
	if (!dst || size == 0)
		return (src_len);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
