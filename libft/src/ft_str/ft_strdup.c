/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:05:00 by japostad          #+#    #+#             */
/*   Updated: 2025/02/27 21:32:36 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_strdup - Creates a new copy of a string
* string: String to duplicate
* Returns: New string or NULL if allocation fails
*/
#include "libft.h"

char	*ft_strdup(const char *string)
{
	size_t	i;
	char	*new_str;

	i = 0;
	new_str = (char *)malloc(sizeof(char) * ft_strlen(string) + 1);
	if (!new_str)
		return (0);
	while (string[i] != '\0')
	{
		new_str[i] = string[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
