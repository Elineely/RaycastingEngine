/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utills.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surlee <surlee@student.42.seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:14:11 by surlee            #+#    #+#             */
/*   Updated: 2023/04/10 13:30:45 by surlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"
#include "../libft/libft.h"

char	*remove_newline(char *line, char *set)
{
	char	**splited;
	char	*temp;

	splited = ft_split(line, set);
	if (splited[0] == NULL)
	{
		free(splited);
		return (ft_strdup(" "));
	}
	temp = splited[0];
	free(splited[1]);
	free(splited);
	return (temp);
}
