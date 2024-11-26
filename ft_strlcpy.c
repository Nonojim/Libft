/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npederen <npederen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:31:59 by npederen          #+#    #+#             */
/*   Updated: 2024/11/26 18:08:22 by npederen         ###   ########.fr       */
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
	if ((j + 1 <= size))
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i++ < (j - 1))
			dst[i] = src[i];
	}
	dst[j] = '\0';
	return (j);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "testet";
	char	dst[] ="test";
	
	size_t n = 4;
	printf("%zu et %s\n", ft_strlcpy(dst, src, n), dst);
	return (0);
}*/