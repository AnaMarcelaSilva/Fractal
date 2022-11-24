#include "../includes/fractal.h"
#include <stdio.h>

// ========================== RENDERIZADOR
int		render(t_data *mlx)
{
	background(mlx->img, 0x610812);
	circle(mlx->img,(t_circle){WIDTH / 2, HEIGHT / 2 , 50, 0x3eff21});
	rect(mlx->img,(t_props){WIDTH - 100, HEIGHT - 100, 100, 100, 0x3eff21});
	mlx_put_image_to_window(mlx->init, mlx->win, mlx->img->mlx_img, 0 ,0);
	return (1);
}

// ============================ EvENTO DE TECLAS
int		key_hook(int key_code, t_data *mlx)
{
	if (key_code == ESC)
	{
		mlx_destroy_window(mlx->init, mlx->win);
		mlx_destroy_display(mlx->init);
		if(mlx->init)
			free(mlx->init);
		exit(0);
	}

	printf("%i\n", key_code);
	return (1);
}

//========================= EVENTO DE CLICK DO MOUSE E POS
int		mouse_hook(int	button, int x, int y)
{
	printf("posX >> : %i\n posY >> : %i\n ButtonPress >> : %i\n", x,  y, button);
	return (0);
}
