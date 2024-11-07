/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npederen <npederen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:13:06 by npederen          #+#    #+#             */
/*   Updated: 2024/11/07 15:27:15 by npederen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big,	const char *little, size_t len)
{
	#include "libft.h"
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
			j++;
			//return ((char *)&s[i]);
		else
			j = 0;
		i++;
		if (j == ft_strlen(little))
			return (big[i - j])
	}
	return (NULL);

}