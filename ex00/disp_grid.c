/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopizzo <mlopizzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:38:18 by mlopizzo          #+#    #+#             */
/*   Updated: 2025/07/05 18:47:00 by mlopizzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sources.h"

void	disp_grid(int **grid)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			ft_putchar(c);
			if (j < 3)
			{
				ft_putchar(' ');
			}
			++j;
		}
		ft_putchar('\n');
		++i;
	}
}

// int main()
// {
// 	int grid[4][4] = {{1, 2, 3, 4},
// 						{2, 3, 1, 4},
// 						{2, 1, 4, 3},
// 						{3, 2, 4, 1}};

// 	disp_grid(grid);
// }