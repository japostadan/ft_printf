/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:36:45 by japostad          #+#    #+#             */
/*   Updated: 2025/01/12 13:20:58 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_atoi - Converts a string to an integer
* str: The string to convert
* Returns: The converted number, or 0 on error
* Note: Handles negative numbers and skips whitespace
*/

int	ft_atoi(const char *str)
{
	unsigned long long	num;
	int					sign;

	num = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
		if (num > __LONG_MAX__ && sign == 1)
			return (-1);
		else if (num > __LONG_MAX__ && sign == -1)
			return (0);
	}
	return (num * sign);
}
