/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_wall_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizi <obouizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:06:28 by obouizi           #+#    #+#             */
/*   Updated: 2025/02/02 16:17:45 by obouizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	draw_side_wall(t_data *mlx, int x, int y)
{
	while (y < mlx->window_height - mlx->img_wall->height)
	{
		put_img_to_buffer(mlx->buffer_img, mlx->img_wall, x, y);
		y += mlx->img_wall->height;
	}
}

void	draw_up_wall(t_data *mlx)
{
	int	x;

	x = 0;
	while (x < mlx->window_width)
	{
		put_img_to_buffer(mlx->buffer_img, mlx->img_wall, x, 0);
		x += mlx->img_wall->width;
	}
}

void	draw_down_wall(t_data *mlx)
{
	int	x;

	x = 0;
	while (x < mlx->window_width)
	{
		put_img_to_buffer(mlx->buffer_img, mlx->img_wall, x,
			mlx->window_height - mlx->img_wall->height);
		x += mlx->img_wall->width;
	}
}

void	draw_wall(t_data *mlx)
{
	if (!mlx->img_wall->img_ptr)
	{
		ft_printf("Error\nWall texture not loaded!\n");
		return ;
	}
	draw_up_wall(mlx);
	draw_down_wall(mlx);
	draw_side_wall(mlx, 0, mlx->img_wall->height);
	draw_side_wall(mlx, mlx->window_width - mlx->img_wall->width,
		mlx->img_wall->height);
}
