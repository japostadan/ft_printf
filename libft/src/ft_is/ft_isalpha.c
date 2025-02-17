/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:39:53 by japostad          #+#    #+#             */
/*   Updated: 2025/01/13 17:28:40 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_isalpha - Checks if a character is alphabetic
* c: The character to check
* Returns: 1 if character is a letter, 0 otherwise
*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
