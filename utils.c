/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:31:08 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/16 22:08:43 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>  // Include for malloc, free, abs
#include <unistd.h>  // Include for write

int ft_strlen(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

char *ft_itoa(int n)
{
    int sign = (n < 0) ? -1 : 1;
    int digits = 1;
    int temp = n;

    while ((temp /= 10) != 0)
        digits++;

    char *result = (char *)malloc((digits + (sign == -1 ? 1 : 0) + 1) * sizeof(char));
    if (!result)
        return NULL;

    if (sign == -1)
        result[0] = '-';

    for (int i = digits + (sign == -1 ? 0 : -1); i >= 0; i--)
    {
        result[i] = '0' + abs(n % 10);
        n /= 10;
    }

    result[digits + (sign == -1 ? 0 : -1) + 1] = '\0';
    return result;
}

char *ft_ptr_to_hex(void *ptr)
{
    unsigned long long num = (unsigned long long)ptr;
    char *hex_str = (char *)malloc(17 * sizeof(char)); // Assumes 64-bit pointer
    if (!hex_str)
        return NULL;

    hex_str[0] = '0';
    hex_str[1] = 'x';

    for (int i = 15; i >= 2; i--)
    {
        int digit = num & 0xF;
        hex_str[i] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
        num >>= 4;
    }

    hex_str[16] = '\0';
    return hex_str;
}

char *ft_uitoa(unsigned int n)
{
    int digits = 1;
    unsigned int temp = n;

    while ((temp /= 10) != 0)
        digits++;

    char *result = (char *)malloc((digits + 1) * sizeof(char));
    if (!result)
        return NULL;

    for (int i = digits - 1; i >= 0; i--)
    {
        result[i] = '0' + (n % 10);
        n /= 10;
    }

    result[digits] = '\0';
    return result;
}

char *ft_uitox(unsigned int n)
{
    char *hex_str = (char *)malloc(9 * sizeof(char)); // Assumes 32-bit unsigned int
    if (!hex_str)
        return NULL;

    for (int i = 7; i >= 0; i--)
    {
        int digit = n & 0xF;
        hex_str[i] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
        n >>= 4;
    }

    hex_str[8] = '\0';
    return hex_str;
}

char *ft_uitoX(unsigned int n)
{
    char *hex_str = (char *)malloc(9 * sizeof(char)); // Assumes 32-bit unsigned int
    if (!hex_str)
        return NULL;

    for (int i = 7; i >= 0; i--)
    {
        int digit = n & 0xF;
        hex_str[i] = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
        n >>= 4;
    }

    hex_str[8] = '\0';
    return hex_str;
}

int ft_putnbr_u(unsigned int n)
{
    char *num_str = ft_uitoa(n);
    int len = ft_strlen(num_str);
    write(1, num_str, len);
    free(num_str);
    return len;
}

