/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopizzo <mlopizzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:26:41 by elhirond          #+#    #+#             */
/*   Updated: 2025/07/05 19:51:09 by mlopizzo         ###   ########.fr       */
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
	int **grid;

	if (argc != 2)
		return (err_manager());
	len = 0;
	while (argv[1][len] != '\0')
		len++;
	if (len != 31)
		return (err_manager());
	if (is_invalid_input(argv))
		return (err_manager());
	
	grid = init_grid();
	disp_grid(grid);
	free(grid);
	return (0);
}
