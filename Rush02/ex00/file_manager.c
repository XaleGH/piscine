/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:14:05 by lraverdy          #+#    #+#             */
/*   Updated: 2023/07/30 23:22:13 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inventory.h"

void	child_right_part(char *str, int i, int j, char *word)
{
	int	is_first;

	is_first = 1;
	while (str[i + j])
	{
		if (str[i + j] == '\n')
			break ;
		else if (str[i + j] == ' ' && is_first)
		{
			is_first = 0;
			word[j] = ' ';
			j++;
			i++;
		}
		else if (str[i + j] != ' ')
		{
			is_first = 1;
			word[j] = str[i + j];
			j++;
		}
		else
			i++;
	}
}

char	*get_right_part(char *str)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (str[i] && str[i] != ':')
		i++;
	i++;
	while (str[i] && str[i] == ' ')
		i++;
	while (str[i + j])
		j++;
	word = malloc(BUFFER_SIZE * 100000 * sizeof(char));
	if (word == NULL)
		return (NULL);
	j = 0;
	child_right_part(str, i, j, word);
	return (word);
}

int	format_data(char *str, int lignes_count, char *numbers[], char *coresp[])
{
	int		i;

	i = 0;
	lignes_count = 0;
	(void)coresp;
	while (str[i])
	{
		if (str[i] == '\n' || i == 0)
		{
			numbers[lignes_count] = ft_atoa(str + i);
			coresp[lignes_count] = get_right_part(&str[i]);
			lignes_count++;
			i++;
		}
		else
			i++;
	}
	return (check_dict(numbers));
}

int	master_dict(char *filename, char *numbers[], char *coresp[])
{
	int		i;
	int		lignes_count;
	FILE	*fichier;
	char	buffer[BUFFER_SIZE];

	fichier = fopen(filename, "r");
	if (fichier == NULL)
	{
		ft_putstr("Malloc Error !");
		return (0);
	}
	i = 0;
	lignes_count = 0;
	fread(&buffer, sizeof(char), sizeof(buffer), fichier);
	fclose(fichier);
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			lignes_count++;
		i++;
	}
	return (format_data(buffer, lignes_count, numbers, coresp));
}
