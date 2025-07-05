/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: elhirond <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/07/05 15:26:41 by elhirond       #+#    #+#                */
/*   Updated: 2025/07/05 16:01:31 by elhirond       ########   odam.nl        */
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
			{
				ft_putstr(NOT1_4);
				return (1);
			}
		}
		else
		{
			if (input[i] != ' ')
			{
				ft_putstr(NOT_SPACE);
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	len;

	if (argc != 2)
	{
		ft_putstr(NOT31);
		return (1);
	}
	len = 0;
	while (argv[1][len] != '\0')
		len++;
	if (len != 31)
	{
		ft_putstr(NOT31);
		return (1);
	}
	is_valid_input(argv);
}
