/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:00:46 by lmaume            #+#    #+#             */
/*   Updated: 2023/11/06 13:01:32 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
		while (n != 0)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
			n--;
		}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t	n = 12;
	char	src[999] = "abcdefghijklmnopqrstuvwxyz";
	char	dest[999] = "une sting";
	char	dest2[999] = "une sting";

	ft_memmove(dest, src, n);
	memmove(dest2, src, n);
	printf("%s\n%s\n", dest, dest2);
	return (0);
}