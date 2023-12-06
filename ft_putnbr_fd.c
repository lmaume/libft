/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:02:16 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/06 17:38:14 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*c;
	int		i;

	i = 0;
	c = NULL;
	if (n < 10)
		c[i] = n + '0';
	while (n >= 10)
	{
		c[i] = (n / 10 + '0');
		i++;
		c[i] = (n % 10 + '0');
	}
	ft_putstr_fd(c, fd);
}

int main(void)
{
	int fd = 1;
	int n = 18;
	ft_putnbr_fd(n, fd);
}