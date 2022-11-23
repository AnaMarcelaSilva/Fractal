#include "../includes/fractal.h"

int		screen(t_data *mlx, int width, int height, char title[])
{
	mlx->init = mlx_init();
	mlx->win = mlx_new_window(mlx->init, width, height, title);
	event_caller(mlx);
	mlx_loop(mlx->init);
	return (1);
}
