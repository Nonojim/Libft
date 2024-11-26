/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npederen <npederen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:49:42 by npederen          #+#    #+#             */
/*   Updated: 2024/11/07 13:55:35 by npederen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i-- > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	const char str[] = "itesterat";
	int c = 'i';

	printf("[%s]", ft_strrchr(str, c));
	return (0);
}*/