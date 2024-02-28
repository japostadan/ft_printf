/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:31:08 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/28 12:11:23 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>  // Include for malloc, free, abs
#include <unistd.h>  // Include for write
void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}


void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

int ft_putnbr(int n)
{
    int i = 0;
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return 11;
    }
    if (n < 0)
    {
        ft_putchar('-');
        i++;
        n = -n;
    }
    if (n >= 10)
    {
        i += ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
    i++;
    return i;
}

int ft_putnbr_u(unsigned int n)
{
    int i = 0;
    if (n >= 10)
    {
        i += ft_putnbr_u(n / 10);
    }
    ft_putchar(n % 10 + '0');
    i++;
    return i;
}



char *ft_ptr_to_hex(void *ptr)
{
    // Implementation to convert pointer to hexadecimal and return the string
    char *hex_digits = "0123456789abcdef";
    unsigned long long value = (unsigned long long)ptr;

    int size = sizeof(void *) * 2;
    char *result = (char *)malloc(size + 3); // +3 for "0x" prefix and null terminator

    result[0] = '0';
    result[1] = 'x';

    int i = size + 1;

    while (--i >= 2)
    {
        int index = value % 16;
        result[i] = hex_digits[index];
        value /= 16;
    }

    return result;
}
char *ft_uitox(unsigned int n)
{
    // Implementation to convert unsigned integer to lowercase hexadecimal string
    char *hex_digits = "0123456789abcdef";
    int size = 1;
    unsigned int temp = n;

    while (temp /= 16)
        size++;

    char *result = (char *)malloc(size + 1);

    result[size] = '\0';

    while (size--)
    {
        result[size] = hex_digits[n % 16];
        n /= 16;
    }

    return result;
}

char *ft_uitoX(unsigned int n)
{
    // Implementation to convert unsigned integer to uppercase hexadecimal string
    char *hex_digits = "0123456789ABCDEF";
    int size = 1;
    unsigned int temp = n;

    while (temp /= 16)
        size++;

    char *result = (char *)malloc(size + 1);

    result[size] = '\0';

    while (size--)
    {
        result[size] = hex_digits[n % 16];
        n /= 16;
    }

    return result;
}

