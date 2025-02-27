/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:04:38 by japostad          #+#    #+#             */
/*   Updated: 2025/02/27 21:27:58 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
* ft_strchr - Locates first occurrence of character in string
* s: String to search
* c: Character to find
* Returns: Pointer to character or NULL if not found
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
