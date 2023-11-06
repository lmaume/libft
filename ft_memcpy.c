/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:00:29 by lmaume            #+#    #+#             */
/*   Updated: 2023/11/06 13:07:18 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return ((char *)src);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t	n = -8;
	char	src[999] = "abcdefghijklmnopqrstuvwxyz";
	char	dest[999] = "une sting";
	char	dest2[999] = "une sting";

	//ft_memcpy(dest, src, n);
	memcpy(dest2, src, n);
	printf("%s\n%s\n", dest, dest2);
	return (0);
}