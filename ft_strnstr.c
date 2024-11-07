/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npederen <npederen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:13:06 by npederen          #+#    #+#             */
/*   Updated: 2024/11/07 16:44:42 by npederen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *)&big[0]);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		i++;
		if (j == ft_strlen(little))
			return ((char *)&big[i - j]);
	}
	return (NULL);
}

/*#include <stdio.h>
#include <bsd/string.h> //compile avec -lbsd

int	main(void)
{
	const char big[] = "teste\0rat";
	const char little[] = "\0rat";
	size_t	len = 9;
	printf("temoin :[%s]\n", strnstr(big, little, len));
	printf("moi :[%s]", ft_strnstr(big, little, len));
	return (0);
}
*/