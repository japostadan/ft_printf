/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:41:17 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 18:41:23 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_isprint - test if the character is printable
* c: The character to check
* Returns: 1 if true else 0 if false.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
