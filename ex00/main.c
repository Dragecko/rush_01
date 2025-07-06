/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopizzo <mlopizzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:26:41 by elhirond          #+#    #+#             */
/*   Updated: 2025/07/06 16:32:57 by mlopizzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sources.h"

int	is_invalid_input(char **argv)
{
	char	*input;
	int		i;

	input = argv[1];
	i = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
		{
			if (input[i] < '1' || input[i] > '4')
				return (1);
		}
		else
		{
			if (input[i] != ' ')
				return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	len;
	int	**grid;
	int	*clues;
	int	pos;

	pos = 0;
	if (argc != 2)
		return (err_manager());
	len = 0;
	while (argv[1][len] != '\0')
		len++;
	if (len != 31)
		return (err_manager());
	if (is_invalid_input(argv))
		return (err_manager());
	clues = parsing(argv[1]);
	grid = init_grid();
	if (ft_solver_from_pos(pos, grid, clues) == 0)
		disp_grid(grid);
	else
		err_manager();
	free(grid);
	free(clues);
	return (0);
}

//clues = parsing("3 1 4 2 2 2 1 2 2 2 1 3 2 1 3 2");
//clues = parsing("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2");
//clues = parsing("3 2 2 1 2 3 1 2 3 2 1 3 1 3 3 2");