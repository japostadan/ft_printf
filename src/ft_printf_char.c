/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:55:06 by japostad          #+#    #+#             */
/*   Updated: 2025/01/13 19:55:10 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(va_list ap, int *len)
{
	char	c;

	c = va_arg(ap, int);
	if (write (1, &c, 1) == -1)
		(*len) = -1;
	else
		(*len)++;
	return (*len);
}
