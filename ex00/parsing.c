/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   parsing.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: wde-oliv <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/07/05 16:10:27 by wde-oliv       #+#    #+#                */
/*   Updated: 2025/07/05 17:26:59 by wde-oliv       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "sources.h"

int	*parsing(char *input)
{
	int	*clues;
	int	idx;
	int	i;

	clues = malloc(sizeof(int) * 16);
	if (!clues)
		err_manager();
	i = 0;
	idx = 0;
	while (input[i])
	{
		if (input[i] >= '1' && input[i] <= '4')
		{
			clues[idx] = input[i] - '0';
			idx++;
		}
		i++;
	}
	if (idx != 16)
		err_manager();
	return (clues);
}
/*
int	main(int argc, char **argv)
{
	int	i;
	int *clues;
	
	i = 0;
	if (argc != 2)
		return(1);
	clues = parsing(argv[1]);
	while (clues[i] != '\0')
	{
		printf("%d", clues[i]);
		i++;
	}
	printf("\n");
	free(clues);
	return (0);
}
*/

/*
int	**pool_clues_divide(int *clues)
{
	int	clues_top[4];
	int	clues_bottom[4];
	int	clues_left[4];
	int	clues_right[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		clues_top[i] = clues[i];
		clues_bottom[i] = clues[4 + i];
		clues_left[i] = clues[8 + i];
		clues_right[i] = clues[12 + i];
		i++;
	}
	return (clues_top, clues_bottom, clues_left, clues_right);
}
*/