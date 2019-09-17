/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_draw.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarrouj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:28:06 by yfarrouj          #+#    #+#             */
/*   Updated: 2019/09/16 20:45:26 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_draw(t_frct frct)
{
	int i = 0;
	int y = 0;
	while(i < 1000)
	{
		fill_pixel(frct.my_image_string,i ,y, 0xff0000);
		i++;
		y++;
	}
	i = 1000;
	y = 0;
	while(i > 0)
	{
		fill_pixel(frct.my_image_string,i ,y, 0x00FFFF);
		i--;
		y++;
	}
}
void	fill_pixel(int *data, int x, int y, unsigned int color)
{
	data[x + y * 1000] = color;
}
int main ()

{

	t_frct frct;
	frct.x1 = -2.1;
	frct.x2 = 0.6;
	frct.y1 = -1.2;
	frct.y2 = 1.2;
	frct.iter = 30;
	frct.mlx_ptr = mlx_init();

	frct.image_x = (frct.x2 - frct.x1) * 300;
	frct.image_y = (frct.y2 - frct.y1) * 300;

	frct.win_ptr = mlx_new_window(frct.mlx_ptr, 1000, 1000, "Fract'ol");
	frct.img_ptr = mlx_new_image(frct.mlx_ptr, 1000, 1000);
	frct.my_image_string = (int*)mlx_get_data_addr(frct.img_ptr, &frct.bpp, &frct.size_line, &frct.endian);
	ft_draw(frct);

	mlx_put_image_to_window(frct.mlx_ptr, frct.win_ptr, frct.img_ptr, 0, 0);
	mlx_loop(frct.mlx_ptr);
}
