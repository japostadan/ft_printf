/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:38:55 by japostad          #+#    #+#             */
/*   Updated: 2025/01/13 20:22:25 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_calloc - Allocates and zeros memory
* count: Number of elements
* size: Size of each element
* Returns: Pointer to allocated memory, or NULL on failure
* Note: Checks for overflow before allocating
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	s;

	s = count * size;
	tmp = malloc(s);
	if (count == 0 || size == 0)
		return (malloc(0));
	if (!tmp || (size && ((size_t)(-1) / size) < count))
		return (NULL);
	ft_bzero (tmp, s);
	return (tmp);
}
