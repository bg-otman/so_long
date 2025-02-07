/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_elements_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizi <obouizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:04:40 by obouizi           #+#    #+#             */
/*   Updated: 2025/02/02 16:18:47 by obouizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	check_elements(t_data *mlx)
{
	if (mlx->map->found_collect == 0)
		put_error("Error\nInvalid map: No Collectable found.\n", mlx);
	else if (mlx->map->found_exit == 0)
		put_error("Error\nInvalid map: No exit door found.\n", mlx);
	else if (mlx->map->found_exit > 1)
		put_error("Error\nInvalid map: only one exit door allowed.\n", mlx);
	else if (mlx->map->found_player == 0)
		put_error("Error\nInvalid map: no Player found.\n", mlx);
	else if (mlx->map->found_player > 1)
		put_error("Error\nInvalid map: only one Player allowed.\n", mlx);
}

void	is_valid_element(char **map, t_data *mlx)
{
	int (i), (j);
	mlx->map->found_collect = 0;
	mlx->map->found_player = 0;
	mlx->map->found_exit = 0;
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != 'P' && map[i][j] != 'E' && map[i][j] != 'C'
				&& map[i][j] != '0' && map[i][j] != '1' && map[i][j] != 'N')
			{
				put_error("Error\nInvalid map: invalid character.\n", mlx);
			}
			count_elements(map[i][j], mlx);
			j++;
		}
		i++;
	}
	check_elements(mlx);
}
