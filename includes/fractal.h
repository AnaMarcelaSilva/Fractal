#ifndef FRACTOL_H
# define FRACTOL_H

#include <mlx.h>
//#include "minilibx/libmlx.h"
#include <unistd.h>
#include <stdlib.h>
// ===================== MACROS
# define ESC 65307
typedef	struct l_data
{
	void	*init;
	void	*win;
}				t_data;

int		key_hook(int key_code, t_data *mlx);
int		event_caller(t_data *mlx);
int		render(t_data *mlx);
int		mouse_hook(int	button, int x, int y, t_data *mlx);
int		screen(t_data *mlx, int width, int height, char title[]);
#endif // FRACTOL_H
