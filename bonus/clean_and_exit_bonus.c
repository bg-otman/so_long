/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_and_exit_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizi <obouizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 08:53:37 by obouizi           #+#    #+#             */
/*   Updated: 2025/02/02 16:26:15 by obouizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	clean_and_exit(t_data *mlx)
{
	if (mlx->player)
		free(mlx->player);
	if (mlx->enemy)
		free(mlx->enemy);
	if (mlx->map && mlx->map->map_grid)
		ft_free(mlx->map->map_grid);
	if (mlx->map)
		free(mlx->map);
	if (mlx->buffer_img && mlx->buffer_img->img_ptr)
		mlx_destroy_image(mlx->mlx_ptr, mlx->buffer_img->img_ptr);
	if (mlx->buffer_img)
		free(mlx->buffer_img);
	if (mlx)
		free(mlx);
	exit(EXIT_FAILURE);
}
