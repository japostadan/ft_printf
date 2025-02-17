/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:38:23 by japostad          #+#    #+#             */
/*   Updated: 2025/01/12 20:38:43 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_bzero - writes n zeroed bytes to the string s
 * s: pointer from which to begin zeroing the data.
 * n: the number of bytes to erase.
 * Returns: 
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
