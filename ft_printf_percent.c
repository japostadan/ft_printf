/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:53:11 by japostad          #+#    #+#             */
/*   Updated: 2025/01/13 19:53:19 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_percent(char const format, int *len)
{
	if (write(1, &format, 1) == -1)
		(*len) = -1;
	else
		(*len)++;
	return (*len);
}
