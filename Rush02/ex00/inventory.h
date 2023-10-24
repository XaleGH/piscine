/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inventory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:15:35 by jverdier          #+#    #+#             */
/*   Updated: 2023/07/30 23:37:38 by jverdier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INVENTORY_H
# define INVENTORY_H

# include <stdlib.h>
# include <unistd.h>
# include <malloc.h>

# define BUFFER_SIZE 510

// Error Messages
# define DICT_ERROR "Dict Error\n"

// general.c
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_atoa(char *str);
void	ft_putstr(char *str);
int		ft_intint(char *taba, char *tabl1);

// chunk.c
char	**chunk(char *taba, int unit);
void	check_ten(char *taba, char **coresp);

// check_dict.c
int		check_dict(char **numbers);

// chunk_writer.c
void	write_chunk(int chunk_index, char *coresp[]);
void	write_coresp(char *number, char **coresp);
void	ft_format(int chunk_index, char *number);
void	int_to_char(int num, char *result);

// print_num.c
int		ft_link_right(char **chunk, char **corresp);

// file_manager.c
int		master_dict(char *filename, char *numbers[], char *coresp[]);

#endif
