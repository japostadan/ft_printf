/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:39:23 by japostad          #+#    #+#             */
/*   Updated: 2025/01/13 17:27:16 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
* ft_isalnum - Checks if a character is alphanumeric
* c: The character to check
* Returns: 1 if character is a letter or a number, 0 otherwise
*/
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
