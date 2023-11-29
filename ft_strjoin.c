/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:32:48 by lmaume            #+#    #+#             */
/*   Updated: 2023/11/29 16:41:31 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*sausage;

	i = 0;
	j = 0;
	sausage = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!sausage)
		return (NULL);
	while (s1[i] != '\0')
	{
		sausage[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		sausage[i] = s2[j];
		i++;
		j++;
	}
	sausage[i] = '\0';
	return (sausage);
}
