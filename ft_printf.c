/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:34:19 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/16 22:01:14 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

static void ft_putchar(char c)
{
    write(1, &c, 1);
}

static void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

static int ft_putnbr(int n)
{
    char *num_str = n < 0 ? ft_itoa(n) : ft_uitoa((unsigned int)n);
    int len = ft_strlen(num_str);
    write(1, num_str, len);
    free(num_str);
    return len;
}

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;
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
                ft_putstr(ft_ptr_to_hex(va_arg(args, void *)));
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
        }
        else
        {
            write(1, format, 1);
            count++;
        }

        format++;
    }

    va_end(args);
    return count;
}

