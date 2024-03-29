/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surlee <surlee@student.42.seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:14:05 by surlee            #+#    #+#             */
/*   Updated: 2023/04/10 13:30:45 by surlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"
#include "../libft/libft.h"

void	check_arguments(int ac, char **av)
{
	int	i;

	if (ac != 2)
		print_error_and_exit("wrong arguments\n");
	i = ft_strlen(av[1]) - 1;
	while (av[1][i] != '.')
	{
		if (i == 0)
			print_error_and_exit("wrong file\n");
		--i;
	}
	if (ft_strncmp(av[1] + i, ".cub\0", 5) != 0)
		print_error_and_exit("wrong name\n");
}

void	check_extension_name(char *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i] != '.')
	{
		if (i == 0)
			print_error_and_exit("wrong file\n");
		--i;
	}
	if (ft_strncmp(s + i, ".xpm\0", 5) != 0)
		print_error_and_exit("wrong name\n");
}
