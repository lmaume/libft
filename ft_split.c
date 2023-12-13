/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:42:33 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/13 19:08:42 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include "libft.h"

static
int	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	printf("%zu\n", count);
	return (count);
}

static
void	fill_tab(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	k;
	
	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		char *sub = ft_substr(s, i, (j - i));
		tab[k] = sub;
		k++;
		i = j;
	}
	tab[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = ft_calloc(wordcount(s, c) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	fill_tab(s, c, tab);
	return (tab);
}

// int	main(void)
// {
// 	int		k;
// 	char	str[] = "      ";
// 	char	c = ' ';
// 	char	**tab = ft_split(str, c);

// 	k = 0;
// 	while (tab[k] != NULL)
// 	{
// 		printf("%s\n", tab[k]);
// 		free(tab[k]);
// 		k++;
// 	}
// 	free(tab);
// }
