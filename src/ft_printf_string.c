/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:52:09 by japostad          #+#    #+#             */
/*   Updated: 2025/01/13 19:52:19 by japostad         ###   ########.fr       */
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
