/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:19:01 by jpostada          #+#    #+#             */
/*   Updated: 2024/03/05 14:34:10 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_pointer(char const format, va_list ap, int *len)
{
	unsigned long long	p;
	char				*to_write;

	p = va_arg(ap, unsigned long long);
	to_write = ft_utoa_base(p, ft_baselen(format));
	if (!to_write)
	{
		(*len) = -1;
		return (*len);
	}
	ft_printf_putnbr(format, to_write, len);
	free(to_write);
	return (*len);
}
