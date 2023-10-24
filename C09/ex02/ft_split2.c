/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:14:36 by asaux             #+#    #+#             */
/*   Updated: 2023/08/03 14:43:30 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	nb_word;

	i = 0;
	nb_word = 0;
	while (str[i] != '\0')
	{
		if (i != 0)
		{
			if ((is_sep(str[i], charset)) && !(is_sep(str[i - 1], charset)))
				nb_word++;
		}
		i++;
	}
	if (!(is_sep(str[i - 1], charset)))
		nb_word++;
	return (nb_word);
}

int	count_char(char *str, char *charset)
{
	int	i;
	int	k;

	i = 0;
	while (is_sep(str[i], charset))
		i++;
	k = 0;
	while (!(is_sep(str[k], charset)))
	{
		k++;
	}
	return (k);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		nb_words;
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nb_words = count_words(str, charset);
	tab = malloc(sizeof(char *) * (nb_words + 1));
	if (!tab)
		return (0);
	while (i < nb_words)
	{
		while (is_sep(str[j], charset))
			j++;
		tab[i] = malloc(sizeof(char) * count_char(&str[j], charset) + 1);
		tab[i] = ft_strncpy(tab[i], &str[j], count_char(&str[j], charset));
		tab[i][count_char(&str[j], charset) + 1] = '\0';
		j = j + count_char(&str[j], charset);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
/*
int	main(void)
{
	char	**tab;
	int	i;


	tab = ft_split("ooiooo", "o");
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/
