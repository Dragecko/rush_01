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

	r = count_visible_from_right(row, col, grid);
	l = count_visible_from_left(row, col, grid);
	t = count_visible_from_top(row, col, grid);
	b = count_visible_from_bottom(row, col, grid);
	if (t != clues[col] && row == 3)
		return (1);
	if (b != clues[col + 4] && row == 3)
		return (1);
	if (l != clues[row + 8] && col == 3)
		return (1);
	if (r != clues[row + 12] && col == 3)
		return (1);
	return (0);
}

int	is_invalid_placement(int **grid, int row, int col, int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][col] == val)
			return (1);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == val)
			return (1);
		i++;
	}
	return (0);
}

int	ft_solver_from_pos(int pos, int **grid, int *clues)
{
	int	row;
	int	col;
	int	val;

	if (pos == 16)
		return (0);
	row = pos / 4;
	col = pos % 4;
	val = 0;
	while (++val <= 4)
	{
		if (is_invalid_placement(grid, row, col, val) == 0)
		{
			grid[row][col] = val;
			if (check_clues(col, row, clues, grid) == 0)
			{
				if(ft_solver_from_pos(pos + 1, grid, clues) == 0)
					return (0);
			}
			else
				grid[row][col] = 0;
		}
	}
	return (1);
}
