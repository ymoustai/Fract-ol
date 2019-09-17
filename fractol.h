/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfarrouj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:29:17 by yfarrouj          #+#    #+#             */
/*   Updated: 2019/09/15 19:51:19 by yfarrouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <pthread.h>
# include <stdlib.h>
# include <math.h>
# include <mlx.h>
# include <unistd.h>
# include "libft/libft.h"

typedef	struct	s_frct
{
	void	*mlx_ptr;
	double  image_x;
	double  image_y;
	int 	iter;
	void	*win_ptr;
	int 	zoom;
	void	*img_ptr;
	unsigned char    *img_data;
	int     bpp;
	int     size_line;
	int     endian;
	int		colour;
	int 	A;
	int 	B;
	int 	i;
	double limitl_x;
	double limitr_x;
	double limitl_y;
	double limitr_y;
	int 	*my_image_string;
	int		start;
		double x,y,t;
		double x1;
		double  x2;
		double y1;
		double  y2;		
	}			t_frct;
void 	ft_draw(t_frct frctl);
int		keyboard(int keycode, t_frct *frct);
int		mouse_hook_(int mousecode, int x, int y, t_frct *frct);
int		mouse_press(int mousecodecode, int x, int y, t_frct *frct);
void	fill_pixel(int *data, int x, int y, unsigned int color);

#endif
