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

int	is_invalid_placement(int **grid, int row, int col, int val)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (grid[i][col] == val)
			return (1);
		i++;
	}
	i = 0;
	while (i < col)
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
				if (ft_solver_from_pos(pos + 1, grid, clues) == 0)
					return (0);
			}
			else
				grid[row][col] = 0;
		}
	}
	return (1);
}
