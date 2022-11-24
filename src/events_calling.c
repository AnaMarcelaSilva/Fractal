#include "../includes/fractal.h"
// ===================== FUNÇÂO PARA SEPARAR OS HOOKS EM ARQUIVO SEPARADO
int		event_caller(t_data *mlx)
{
	mlx->img->mlx_img = mlx_new_image(mlx->init, WIDTH, HEIGHT);
	mlx->img->addr = mlx_get_data_addr(mlx->img->mlx_img, &mlx->img->bpp,
						&mlx->img->line_len, &mlx->img->endian);
	mlx_loop_hook(mlx->init, &render, mlx);
	mlx_mouse_hook(mlx->win, &mouse_hook, &mlx);
	mlx_hook(mlx->win,2, 1L << 0, &key_hook, &mlx);
	return (1);
}
