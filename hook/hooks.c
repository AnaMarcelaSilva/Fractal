#include "../includes/fractal.h"
#include <stdio.h>

// ========================== RENDERIZADOR
int		render(t_data *mlx)
{
	mlx_pixel_put(mlx->init, mlx->win, 200, 200 ,255);
	return (1);
}

// ============================ EvENTO DE TECLAS
int		key_hook(int key_code, t_data *mlx)
{
	if (key_code == ESC)
		mlx_destroy_window(mlx->init, mlx->win);

	printf("%i\n", key_code);
	return (1);
}

//========================= EVENTO DE CLICK DO MOUSE E POS
int		mouse_hook(int	button, int x, int y, t_data *mlx)
{
	if (mlx->init == NULL)
		return (404);
	printf("posX >> : %i\n posY >> : %i\n ButtonPress >> : %i\n", x,  y, button);
	return (0);
}
