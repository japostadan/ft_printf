/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:35:07 by jpostada          #+#    #+#             */
/*   Updated: 2024/03/05 13:45:39 by jpostada         ###   ########.fr       */
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
