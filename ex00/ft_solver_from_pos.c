/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver_from_pos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopizzo <mlopizzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:03:47 by elhirond          #+#    #+#             */
/*   Updated: 2025/07/05 19:18:17 by mlopizzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sources.h"

int	check_clues(int col, int row, int *clues, int **grid)
{
	int	r;
	int	l;
	int	t;
	int	b;

	r = count_visible_from_right(row, grid);
	l = count_visible_from_left(row, grid);
	t = count_visible_from_top(col, grid);
	b = count_visible_from_bottom(col, grid);
	if (r > clues[row + 8] || l > clues[row + 12])
		return (1);
	if (t > clues[col] || b > clues[col + 4])
		return (1);
	return (0);
}

int	is_valid_placement(int **grid, int row, int col, int val)
{
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		if (grid[row][j] == val)
			return (0);
	}
	i = 0;
	while (i < 4)
	{
		if (grid[i][col] == val)
			return (0);
	}
	return (1);
}

int	ft_solver_from_pos(int pos, int **grid, int *clues)
{
	int	row;
	int	col;
	int	val;

	if (pos == 16)
		err_manager();
	row = pos / 4;
	col = pos % 4;
	if (grid[row][col] != 0)
		return (ft_solver_from_pos(pos + 1, grid, clues));
	val = 1;
	while (val <= 4)
	{
		if (is_valid_placement(grid, row, col, val))
		{
			grid[row][col] = val;
			if (ft_solver_from_pos(pos + 1, grid, clues))
				err_manager();
			grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}
