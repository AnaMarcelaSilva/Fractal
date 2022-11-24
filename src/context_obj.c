#include "../includes/fractal.h"

int		render_rect(t_img *img, t_props rect)
{
	int		i;
	int		j;

	i = rect.y;
	while(i < rect.y + rect.height)
	{
			j = rect.x;
			while (j < rect.x + rect.width)
				img_put(img, j++, i, rect.color);
			i++;
	}
	return (0);
}

void	background(t_img *img, int color)
{
	int		i;
	int		j;

	i = 0;
	while (i < HEIGHT)
	{
			j = 0;
			while (j < WIDTH)
			{
					img_put(img, j++, i, color);
			}
			i++;
	}
}