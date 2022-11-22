/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:53:02 by amarcela          #+#    #+#             */
/*   Updated: 2022/11/22 15:02:14 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx/mlx.h"
#include "printf/ft_printf.h"

int	check_args(int argc, char **argv)
{
	argv[0][0] = 'a';
	if (argc <= 1)
	{
		ft_printf("please inform the name of the desired fractal\n");
		return (-1);
	}
	return (1);
}

int	main(int argc, char **argv)
{

	if ((check_args(argc, argv) <= 0))
		return (-1);
}
