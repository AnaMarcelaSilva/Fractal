#include "../includes/fractal.h"

int		rect(t_img *img, t_props rect)
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

int	circle(t_img *img, t_circle pos)
{
	double pi;
	double x1;
	double angle;
	double y1;
	double i;

	pi = 3.14159265359;
	i = 0;
	while (i < 360)
	{
		i += 0.01;
		angle = i;
		x1 = pos.radius * cos((float)angle * pi / 180);
		y1 = pos.radius * sin((float)angle * pi / 180);
		img_put(img, pos.x + x1, pos.y + y1, pos.color);
	}
	return (1);
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
