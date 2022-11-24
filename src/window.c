#include "../includes/fractal.h"

int		screen(t_data *mlx, int width, int height, char title[])
{
	mlx->init = mlx_init();
	if (mlx->init == NULL)
		return (405);
	mlx->win = mlx_new_window(mlx->init, width, height, title);
	if (mlx->win == NULL)
	{
		free(mlx->init);
		return (404);
	}
	event_caller(mlx);
	mlx_loop(mlx->init);
	return (1);
}
