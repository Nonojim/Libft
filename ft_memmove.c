/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npederen <npederen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:44:10 by npederen          #+#    #+#             */
/*   Updated: 2024/11/06 18:31:52 by npederen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i++ < n)
	{
		if (src + i == dest || src + i == dest + n - 1)
		{
			if (src > dest)
			{
				while (j++ < n)
					((unsigned char *)dest)[j] = ((unsigned char *)src)[j];
			}
			else
			{
				while (0 < n--)
					((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
			}
			return (dest);
		}
	}
	return (ft_memcpy(dest, src, n));
}

/*#include <stdio.h>
#include <string.h>
int main (void)
{
	char src[200] = "je taime";
	//char srcT[200] = "je taime";
	//char dest[] = "0x 12345 pas";
	//char destT[] = "0x 12345 pas";
	size_t n = 3;
	
	ft_memmove(src + 3, src, n);
	//memmove(srcT + 3, srcT, n);
	printf("ft_memmove :[%s]\n", src + 3);
	//printf("memmove :[%s]", srcT + 3);
	return (0);
}*/