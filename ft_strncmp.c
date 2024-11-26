/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npederen <npederen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:59:02 by npederen          #+#    #+#             */
/*   Updated: 2024/11/07 16:45:14 by npederen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	n -= 1;
	while (*s1 == *s2 && n && *s1 != '\0')
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned int	n;
	char	*test1;
	char	*test2;

	n = 3;
	test1 = "\nffgfgf";
	test2 = "|nfffgfff";

	printf("resultat : |%d|", strncmp(test1, test2, 3));
	printf(" || resultat strncmp : |%d|", ft_strncmp(test1, test2, 3));
}*/