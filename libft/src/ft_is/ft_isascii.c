/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:40:33 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 18:40:39 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
* ft_isascii - Checks for an ASCII character, which is between 0 and 127 
*   inclusive
* c: The character to check
* Returns: 1 if true else 0 if false.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
