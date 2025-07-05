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
//Extraire les 16 chiffres indicateur des indices clues fourni en entree et les organiser (haut,bas,gauche,droite).

#include "sources.h"

int	*pool_clues(char *input)
{
	int	clues[16];
	int	idx;
	int	i;
	i = 0;
	idx = 0;

	while (i < 31)
	{
		if (input[i] >= '1' && input[i] <= '4')
		{
			clues[idx] = input[i] - '0';
			idx++;
		}
		++i;
	}
	if (idx != 16)
		err_manager();
	return (clues);
}

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

int **parsing(int *av)
{
	int *clues;
	clues = pool_clues_divide(pool_clues(av));
}

int	main(int argc, char **argv)
{
	char **clues = parsing(argv);
	if (argc != 2)
		return;
	printf("%d", clues[0][1]);
}