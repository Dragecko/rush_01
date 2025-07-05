/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sources.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopizzo <mlopizzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:37:18 by elhirond          #+#    #+#             */
/*   Updated: 2025/07/05 19:02:48 by mlopizzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOURCES_H
# define SOURCES_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
int	err_manager(void);
void	disp_grid(int **grid);
int	**init_grid(void);
int count_visible_from_left(int *row);
int count_visible_from_right(int *row);
int count_visible_from_top(int *col);
int count_visible_from_bottom(int *col);
int	*parsing(char *input);

# define ERR "Error\n"

#endif
