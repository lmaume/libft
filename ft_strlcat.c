/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:26:24 by lmaume            #+#    #+#             */
/*   Updated: 2023/11/07 12:03:41 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	char	*temp;

	i = 0;
	if (src[i] < size)
		while (size != 0 && src[i] != )
		{
			temp[i] = src[i];
			i++;
			size--;
		}
	return (*dst);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "quoi";
	char	dst[] = "coubeh";
	size_t	size = 8;

	printf("%s\n", ft_strlcat(dst, str, size));
}
