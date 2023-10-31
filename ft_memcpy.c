/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:00:29 by lmaume            #+#    #+#             */
/*   Updated: 2023/10/31 13:00:49 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	size_t	n = 12;
	char	src[] = "blablablabloooooo";
	char	dest[] = "une sting";

	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
