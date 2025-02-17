/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:42:52 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 18:43:59 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_itoa - Converts an integer to a string (itoa = integer to ASCII).
 * 
 * @n: The integer to be converted.
 * 
 * Returns a pointer to a newly allocated string that contains the number
 * in ASCII representation. The caller is responsible for freeing the memory.
 * If memory allocation fails, returns NULL.
 */
#include "libft.h"

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
