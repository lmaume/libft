/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:42:33 by lmaume            #+#    #+#             */
/*   Updated: 2023/12/12 21:38:43 by lmaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static
int	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c)
			i++;
	}
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
		while (s[i] != c && s[j] != '\0')
			j++;
		tab[k] = ft_substr(s, i, (j - i));
		k++;
		i = j;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = calloc(wordcount(s, c) + 1, 1);
	if (!tab)
		return (NULL);
	fill_tab(s, c, tab);
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	int		k;
	char	str[] = "    haha ah    hahh hahah ahahahahh    ";
	char	c = ' ';
	char	**tab = ft_split(str, c);

	k = 0;
	while (k != 4)
	{
		printf("%s", tab[k]);
		k++;
	}
}

// void *ta_fonction(char *str, char c)
// {
//     int i;
//     int j;
//    // int k;
    
//     i = 0;
//    // k = 0;
//     while(str[i])
//     {
   
//         while (str[i] == c)
//             i++;       
//         j = i;
    
//         while (str[j] != c && str[j] != '\0')
//             j++;
//        ton_mot = ft_substr(i, j);
//			tab[k] = ton_mot ;
//			k++;
//			i = j;
//     }
// }