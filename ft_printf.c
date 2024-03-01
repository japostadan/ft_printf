/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:34:19 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/28 12:06:47 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_select_format(char const format, va_list ap, int *len)
{
	if (format == 'c')
		ft_printf_char(ap, len);
	else if (format == 's')
		ft_printf_string(ap, len);
	else if (format == 'p')
		ft_printf_pointer(format, ap, len);
	else if (format == 'd' || format == 'i')
		ft_printf_int(format, ap, len);
	else if (format == 'u')
		ft_printf_uint(format, ap, len);
	else if (format == 'x' || format == 'X')
		ft_printf_hexa(format, ap, len);
	else if (format == '%')
		ft_printf_percent(format, len);
	else
		(*len) = -1;
	return (*len);
}

int	ft_printf_logic(char const *format, va_list ap, int *len)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_select_format(*format, ap, len);
			if ((*len) == -1)
				break ;
		}
		else
		{
			if (write(1, format, 1) == -1)
			{
				(*len) = -1;
				break ;
			}
			(*len)++;
		}
		format++;
	}
	return (*len);
}

int	ft_printf(char const *format, ...)
{
	int		len;
	va_list	ap;

	if (!format)
		return (-1);
	len = 0;
	va_start(ap, format);
	ft_printf_logic(format, ap, &len);
	va_end(ap);
	return (len);
}
