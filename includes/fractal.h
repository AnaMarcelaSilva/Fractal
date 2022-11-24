#ifndef FRACTOL_H
# define FRACTOL_H

#include <mlx.h>
//#include "minilibx/libmlx.h"
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
// ===================== MACROS
# define ESC 65307
# define HEIGHT 400
# define WIDTH	400
// ===================== Structs
typedef	struct	s_img
{
	void	*mlx_img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}				t_img;

typedef	struct	s_circle
{
	int	x;
	int	y;
	int	radius;
	int	color;
}				t_circle;
typedef	struct	s_props
{
	int	x;
	int	y;
	int	height;
	int	width;
	int	color;
}				t_props;

typedef	struct s_data
{
	void	*init;
	void	*win;
	t_img	*img;
	int		cur_img;
}				t_data;

int		put_image(t_data *mlx, int	width, int	height);
int		mandelbrot(t_data *mlx, int x, float i_y);
void	img_put(t_img *img, int x, int y, int color);
int		rect(t_img *img, t_props rect);
void	background(t_img *img, int color);
int		key_hook(int key_code, t_data *mlx);
int		event_caller(t_data *mlx);
int	circle(t_img *img, t_circle pos);
int		render(t_data *mlx);
int		mouse_hook(int	button, int x, int y);
int		screen(t_data *mlx, int width, int height, char title[]);
#endif // FRACTOL_H
