/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npederen <npederen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:31:59 by npederen          #+#    #+#             */
/*   Updated: 2024/11/06 19:45:41 by npederen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (src[i])
	{
		if (i == size - 1)
			break ;
		dst[i] = src[i];
		i++;
	}
	while (dst[i])
	{
		dst[i] = '\0';
		i++;
	}
	return (j);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "testet";
	char	dst[] ="test";
	
	size_t n = 7;

	//printf("%zu et %s\n", ft_strlcpy(t2, t1, n), t2);
	printf("temoin %zu et %s", strlcpy(dst, src, n), dst);
	char	t2[] ="test";
	char	t1[] = "testet";
	printf("%zu et %s\n", strlcpy(t2, t1, n), t2);
	return (0);
}*/