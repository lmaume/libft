/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:00:46 by lmaume            #+#    #+#             */
/*   Updated: 2023/11/01 12:36:20 by lmaume           ###   ########.fr       */
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