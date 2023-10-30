/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:57:00 by lmaume            #+#    #+#             */
/*   Updated: 2023/10/30 16:31:12 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'
		|| (unsigned char)c >= 'a' && (unsigned char)c <= 'z'
		|| (unsigned char)c >= '0' && (unsigned char)c <= '9')
		return (1);
	else
		return (0);
}
