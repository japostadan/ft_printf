/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:24:20 by japostad          #+#    #+#             */
/*   Updated: 2025/03/18 13:32:04 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Check if the argument c is a space 
 * returns 1 or 0 if space or not
 */

int	ft_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}
