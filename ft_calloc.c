/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:19:42 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/06 16:26:11 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*ptr;
	size_t	overflow_protection_3600xpz;

	if (!nmemb || !size)
		return (malloc(0));
	overflow_protection_3600xpz = nmemb * size;
	if ((overflow_protection_3600xpz / nmemb) != size)
		return (NULL);
	else
	{
		ptr = malloc(size * nmemb);
		if (!ptr)
			return (NULL);
		ft_memset(ptr, 0, size * nmemb);
	}
	return ((void *)ptr);
}
