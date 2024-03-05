/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:46:54 by jpostada          #+#    #+#             */
/*   Updated: 2024/03/05 15:25:40 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_percent(char const format, int *len)
{
	if (write(1, &format, 1) == -1)
		(*len) = -1;
	else
		(*len)++;
	return (*len);
}
