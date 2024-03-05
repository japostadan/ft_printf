/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:59:57 by jpostada          #+#    #+#             */
/*   Updated: 2024/03/05 14:06:35 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(char const format,va_list ap, int *len)
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
