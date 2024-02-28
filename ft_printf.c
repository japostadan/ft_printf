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
// ft_printf.c
#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

int ft_printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
                ft_putchar(va_arg(args, int));
            else if (*format == 's')
                ft_putstr(va_arg(args, char *));
            else if (*format == 'p')
            {
                char *hex_str = ft_ptr_to_hex(va_arg(args, void *));
                ft_putstr(hex_str);
                count += ft_strlen(hex_str);
                free(hex_str);
            }
            else if (*format == 'd' || *format == 'i')
                count += ft_putnbr(va_arg(args, int));
            else if (*format == 'u')
                count += ft_putnbr_u(va_arg(args, unsigned int));
            else if (*format == 'x')
                ft_putstr(ft_uitox(va_arg(args, unsigned int)));
            else if (*format == 'X')
                ft_putstr(ft_uitoX(va_arg(args, unsigned int)));
            else if (*format == '%')
                ft_putchar('%');
            else
                return (-1);
        }
        else
        {
            write(1, format, 1);
            count++;
        }
        format++;
    }
    va_end(args);
    return (count);
}
