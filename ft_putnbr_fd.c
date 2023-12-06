/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:02:16 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/06 19:26:32 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*c;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	c = NULL;
	if (n < 0)
		sign *= -1;
	if (n / 10 != 0)
	{
		c[i] = (n % 10) + '0';
		i++;
		n /= 10;
		ft_putnbr_fd(n, fd);
	}
	if (sign == -1)
		ft_putchar_fd('-', fd);
	while (i > 0)
	{
		ft_putchar_fd(c[i], fd);
		i--;
	}
}

// int	main(void)
// {
// 	int	fd = 1;
// 	int	n = 18;

// 	ft_putnbr_fd(n, fd);
// }
