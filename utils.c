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

int	ft_printf_int(char const format, va_list ap, int *len)
{
	int		i;
	char	*to_write;

	i = va_arg(ap, int);
	to_write = ft_itoa(i);
	if (!to_write)
	{
		(*len) = -1;
		return (*len);
	}
	ft_printf_putnbr(format, to_write, len);
	free(to_write);
	return (*len);
}

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

int	ft_printf_string(va_list ap, int *len)
{
	char	*s;

	s = va_arg(ap, char *);
	if (!s)
	{
		if (write(1, "(null)", 6) == -1)
		{
			(*len) = -1;
			return (*len);
		}
		(*len) += 6;
		return (*len);
	}
	while (*s)
	{
		if (write(1, s, 1) == -1)
		{
			(*len) = -1;
			return (*len);
		}
		(*len)++;
		s++;
	}
	return (*len);
}
int	ft_printf_uint(char const format, va_list ap, int *len)
{
	unsigned int	u;
	char			*to_write;

	u = va_arg(ap, unsigned int);
	to_write = ft_utoa_base(u, ft_baselen(format));
	if (!to_write)
	{
		(*len) = -1;
		return (*len);
	}
	ft_printf_putnbr(format, to_write, len);
	free(to_write);
	return (*len);
}

int	ft_printf_percent(char const format, int *len)
{
	if (write(1, &format, 1) == -1)
		(*len) = -1;
	else
		(*len)++;
	return (*len);
}
int	ft_printf_char(va_list ap, int *len)
{
	char	c;

	c = va_arg(ap, int);
	if (write(1, &c, 1) == -1)
		(*len) = -1;
	else
		(*len)++;
	return (*len);
}
int	ft_printf_hexa(char const format, va_list ap, int *len)
{
	return (ft_printf_uint(format, ap, len));
}
void	ft_str_toupper(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

unsigned int	ft_baselen(char format)
{
	unsigned int	base_len;

	base_len = 10;
	if (format == 'p' || format == 'x' || format == 'X')
		base_len = 16;
	return (base_len);
}

size_t	ft_ulen_base(unsigned long long n, unsigned int base_len)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

char	*ft_utoa_base(unsigned long long n, unsigned int base_len)
{
	char	*num;
	char	*base;
	size_t	num_len;

	base = "0123456789abcdefghijklmnopqrstuvwxyz";
	num_len = ft_ulen_base(n, base_len);
	num = (char *)ft_calloc((num_len + 1), sizeof (char));
	if (!num)
		return (NULL);
	while (num_len--)
	{
		num[num_len] = base[n % base_len];
		n /= base_len;
	}
	return (num);
}

int	ft_printf_putnbr(char format, char *to_write, int *len)
{
	if (format == 'p')
	{
		if (write(1, "0x", 2) == -1)
		{
			(*len) = -1;
			return (*len);
		}
		(*len) += 2;
	}
	if (format == 'X')
	{
		ft_str_toupper(to_write);
	}
	while (*to_write)
	{
		if (write(1, to_write, 1) == -1)
		{
			(*len) = -1;
			return (*len);
		}
		(*len)++;
		to_write++;
	}
	return (*len);
}
void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*output;

	i = 0;
	output = malloc(count * size);
	if (!output)
		return (NULL);
	while (i < count * size)
		output[i++] = 0;
	return (output);
}

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		num_len;
	int		neg_flag;

	neg_flag = 0;
	num_len = ft_numlen(n);
	num = (char *)ft_calloc((num_len + 1), sizeof (char));
	if (!num)
		return (NULL);
	if (n < 0)
		neg_flag = 1;
	while (num_len--)
	{
		if (neg_flag)
		{
			if (num_len == 0)
				num[num_len] = '-';
			else
				num[num_len] = '0' - (n % 10);
		}
		else
			num[num_len] = '0' + (n % 10);
		n /= 10;
	}
	return (num);
}
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
