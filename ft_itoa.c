/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:04:18 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/08 18:00:34 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = ft_calloc(12);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			&str(1) = "2147483648";
			return (str);
		}
		n *= -1;
	}
	while (str[i])
	{
		str[i] = (n % 10) + '0';
		i++;
		n = n/ 10;
	}
	return (str);
}
