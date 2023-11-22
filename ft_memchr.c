/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:17:18 by lmaume            #+#    #+#             */
/*   Updated: 2023/11/22 17:49:48 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = (const char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (str[i] != (char)c && str[i] != '\0' && i != n - 1)
	{
		i++;
	}
	if (str[i] == (char)c)
		return ((void *)&str[i]);
	else
		return (NULL);
}
