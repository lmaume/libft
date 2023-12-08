/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:04:18 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/08 19:11:21 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		temp;
	int		sign;
	int		len;

	i = 0;
	sign = 0;
	while (temp != 0)
	{
		len++;
		temp /= 10;
	}
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		sign = 1;
		str[0] = '-';
		n *= -1;
	}
	str = ft_calloc((len + sign) + 1, 1);
	if (!str)
		return (NULL);
	while (len >= sign)
	{
		str[len] = (n % 10) + '0';
	}
	return (str);
}
