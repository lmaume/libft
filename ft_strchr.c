/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:20:18 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/06 16:27:21 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != (char)c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else
		return (NULL);
}

// int	main(void)
// {
// 	char	buffer1[] = "coprogram\0jesuiscacher";
// 	char	*ptr;
// 	int		ch = 'p';

// 	ptr = strchr(buffer1, ch);
// 	printf ("The first occurrence of %c in '%s' is '%s'\n", ch, buffer1, ptr);
// }
