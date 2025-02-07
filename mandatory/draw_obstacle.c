/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_obstacle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizi <obouizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:55:57 by obouizi           #+#    #+#             */
/*   Updated: 2025/02/02 16:14:02 by obouizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_obstacle(t_data *mlx, int posX, int posY)
{
	if (!mlx->obstacle || !mlx->obstacle->img_ptr)
	{
		ft_printf("Error\nBackground texture not loaded!\n");
		return ;
	}
	put_img_to_buffer(mlx->buffer_img, mlx->obstacle, posX, posY);
}
