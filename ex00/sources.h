/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   sources.h                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: elhirond <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/07/05 15:37:18 by elhirond       #+#    #+#                */
/*   Updated: 2025/07/05 15:46:24 by elhirond       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOURCES_H
# define SOURCES_H

# include <unistd.h>
# include <stdio.h>

void	ft_putstr(char *str);

# define NOT31 "Usage : ./a.out <31 char : 16 int (1-4) with 15 spaces ' '>.\n"
# define NOT1_4 "Int must be between 1 and 4.\n"
# define NOT_SPACE "Spaces must be between each int as follow : '1 4...3 4'.\n"

#endif
