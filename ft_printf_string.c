/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:47:26 by jpostada          #+#    #+#             */
/*   Updated: 2024/03/05 14:16:59 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
