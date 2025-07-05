/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sources.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopizzo <mlopizzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:37:18 by elhirond          #+#    #+#             */
/*   Updated: 2025/07/05 17:30:54 by mlopizzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOURCES_H
# define SOURCES_H

# include <unistd.h>
# include <stdio.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	err_manager(void);

# define ERR "Error\n"

#endif
