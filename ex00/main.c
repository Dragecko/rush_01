/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopizzo <mlopizzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:26:41 by elhirond          #+#    #+#             */
/*   Updated: 2025/07/05 19:32:50 by mlopizzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sources.h"

int	is_valid_input(char **argv)
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
				err_manager();
		}
		else
		{
			if (input[i] != ' ')
				err_manager();
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	len;
	int **grid;

	if (argc != 2)
		err_manager();
	len = 0;
	while (argv[1][len] != '\0')
		len++;
	if (len != 31)
		err_manager();
	is_valid_input(argv);
	**grid = init_grid();
	disp_grid(grid);
}
