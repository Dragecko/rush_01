/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_count_visible.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: elhirond <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/07/05 17:56:30 by elhirond       #+#    #+#                */
/*   Updated: 2025/07/05 17:56:33 by elhirond       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "sources.h"

int	count_visible_from_left(int row, int col, int **grid)
{
	int	visible;
	int	max_h;
	int	i;

	visible = 0;
	max_h = 0;
	i = 0;
	if (col == 3)
	{
		while (i < 4)
		{
			if (grid[row][i] > max_h)
			{
				visible++;
				max_h = grid[row][i];
			}
			i++;
		}
	}
	return (visible);
}

int	count_visible_from_right(int row, int col, int **grid)
{
	int	visible;
	int	max_h;
	int	i;

	visible = 0;
	max_h = 0;
	i = 3;
	if (col == 3)
	{
		while (i >= 0)
		{
			if (grid[row][i] > max_h)
			{
				visible++;
				max_h = grid[row][i];
			}
			i--;
		}
	}
	return (visible);
}

int	count_visible_from_top(int row, int col, int **grid)
{
	int	visible;
	int	max_h;
	int	i;

	visible = 0;
	max_h = 0;
	i = 0;
	if (row == 3)
	{
		while (i < 4)
		{
			if (grid[i][col] > max_h)
			{
				visible++;
				max_h = grid[i][col];
			}
			i++;
		}
	}
	return (visible);
}

int	count_visible_from_bottom(int row, int col, int **grid)
{
	int	visible;
	int	max_h;
	int	i;

	visible = 0;
	max_h = 0;
	i = 3;
	if (row == 3)
	{
		while (i >= 0)
		{
			if (grid[i][col] > max_h)
			{
				visible++;
				max_h = grid[i][col];
			}
			i--;
		}
	}
	return (visible);
}
/*
int main(void)
{
	int tab[4] = {1, 2, 3, 4};
	printf("1, 2, 3, 4\n");
	printf("left to right => %d \n", count_visible_from_left(tab));
	printf("right to left <= %d \n", count_visible_from_right(tab));

	int tab1[4] = {1, 2, 4, 3};
	printf("1\n");
	printf("2\n");
	printf("4\n");
	printf("3\n");
	printf("top to bottom \\/ %d \n", count_visible_from_top(tab1));
	printf("bottom to top /\\ %d \n", count_visible_from_bottom(tab1));
}*/