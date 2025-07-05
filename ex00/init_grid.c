/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopizzo <mlopizzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:49:26 by mlopizzo          #+#    #+#             */
/*   Updated: 2025/07/05 18:59:34 by mlopizzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sources.h"

int	**init_grid(void)
{
	int **grid;
	int	i;
	int	j;

	grid = malloc(4 * sizeof(int*));
	if (!grid)
		err_manager();
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i] = malloc(4 * sizeof(int));
			grid[i][j] = 0;
			++j;
		}
		++i;
	}
	return (grid);
}
/*
int main()
{
	int **grid = init_grid();
	disp_grid(grid);
}*/