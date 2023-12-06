/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:40:41 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/06 16:27:50 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size != 0 && sizeof(dst) != 0)
	{
		while (src[i] != '\0')
		{
			if (i < size - 1)
			{
				dst[i] = src[i];
				j++;
			}
			i++;
		}
		dst[j] = '\0';
	}
	return (ft_strlen(src));
}

// int	main()
// {
// 	char dest[0];
// 	char src[] = "blablo";
// 	size_t size = 8;

// 	printf("%ld\n$s\n", ft_strlcpy(dest, src, size), dest);
// 	printf("%d\n%s\n", strlcpy(dest, src, size) , dest);
// }