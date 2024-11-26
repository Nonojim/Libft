/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npederen <npederen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:49:42 by npederen          #+#    #+#             */
/*   Updated: 2024/11/26 19:40:20 by npederen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (c == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char str[] = "abbbbbbbb";
	const char test[] = "abbbbbbbb";
	int c = 'a';
	int r = 'a';

	printf("[%s]\n", ft_strrchr(str, c));
	printf("temoin [%s]", strrchr(test, r));
	return (0);
}