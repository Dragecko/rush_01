/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopizzo <mlopizzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:57:12 by aleroyer          #+#    #+#             */
/*   Updated: 2025/07/05 12:49:25 by mlopizzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	char_line(int x, int debut, int milieu, int fin)
{
	int	compteur;

	compteur = 0;
	if (x >= 1)
		ft_putchar(debut);
	while (compteur < (x - 2))
	{
		ft_putchar(milieu);
		compteur++;
	}
	if (x >= 2)
		ft_putchar(fin);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	compteur;

	compteur = 0;
	if (y >= 1 && x >= 1)
		char_line(x, 'A', 'B', 'C');
	while (compteur < y - 2 && x >= 1)
	{
		char_line(x, 'B', ' ', 'B');
		compteur++;
	}
	if (y >= 2 && x >= 1)
	{
		char_line(x, 'A', 'B', 'C');
	}
}
