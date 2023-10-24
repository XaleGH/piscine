/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:12:11 by asaux             #+#    #+#             */
/*   Updated: 2023/08/03 16:22:00 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset++ == c)
			return (1);
	}
	return (0);
}

int	count_char(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !(is_sep(str[i], charset)))
		i++;
	return (i);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	nb_word;

	i = 0;
	nb_word = 0;
	while (str[i])
	{
		while (is_sep(str[i], charset) && str[i])
			i++;
		if (str[i])
			nb_word++;
		while (!(is_sep(str[i], charset)) && str[i])
			i++;
	}
	return (nb_word);
}

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (dest);
	i = 0;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	tab = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!tab)
		return (tab);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (is_sep(str[i], charset) && str[i])
			i++;
		if (str[i])
		{
			tab[j] = ft_strndup(&str[i], count_char(&str[i], charset));
			j++;
		}
		while (!(is_sep(str[i], charset)) && str[i])
			i++;
	}
	tab[j] = 0;
	return (tab);
}
/*#include <stdio.h>
int     main(void)
{
        char    **tab;
        int             i;

        i = 0;
        tab = ft_split("||||||test|||||||i||i", "|e");
        while(tab[i])
        {
                printf("%s\n", tab[i]);
                i++;
        }
        free(tab);
        return (0);
}*/
