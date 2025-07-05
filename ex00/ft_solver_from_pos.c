/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_solver_from_pos.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: elhirond <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/07/05 17:03:47 by elhirond       #+#    #+#                */
/*   Updated: 2025/07/05 17:03:50 by elhirond       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "sources.h"

int    ft_solver_from_pos(int pos, int **grid)
{
    int row;
    int col;
    int val;

    if (pos == 16)
        return (1);
    row = pos / 4;
    col = pos % 4;
    if (grid[row][col] != 0)
        return ft_solver_from_pos(pos + 1);
    while (val <= 4)
    {
        if (is_valid_placement(grid, row, col, val))
        {
            grid[row][col] = val;
            if (ft_solver_from_pos(pos + 1))
                return (1);
            grid[row][col] = 0;
        }
        val++;
    }
    return (0);
}