/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:05:34 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 19:05:36 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* ft_strjoin - Concatenates two strings
* s1: First string
* s2: Second string
* Returns: New concatenated string or NULL on error
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (NULL);
	unsigned int	i;
	unsigned int	j;
	char			*new_s;

	i = 0;
	j = 0;
	new_s = (char *) malloc((sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_s)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_s[i + j] = s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	return (new_s);
}
