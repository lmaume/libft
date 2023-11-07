/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:40:41 by lmaume            #+#    #+#             */
/*   Updated: 2023/11/07 12:04:51 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > (size_t)ft_strlen(src))
	{
		while (src[i + 1] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (ft_strlen(src));
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	src[] = "quoi?ggg";
	char	dst1[] = "coubeh";
	char	dst2[] = "coubeh";
	size_t	size = 17;

	printf("Vraie fonction; \n%ld\n\n", strlcpy(dst1, src, size));
	printf("Ma fonction   ; \n%ld\n", ft_strlcpy(dst2, src, size));
	printf("\n%s\n%s\n", dst1, dst2);
}
