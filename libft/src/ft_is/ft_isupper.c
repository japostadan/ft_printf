/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:42:23 by japostad          #+#    #+#             */
/*   Updated: 2025/01/13 17:29:14 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_isupper - check if the character is copital letter
* c: The character to check
* Returns: return non 0 if true else 0 if false.
*/
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
