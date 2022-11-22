NAME = fractal.a

SRC =  ./

INC = ./includes/fdf.h


FLAGS = -Wall -Wextra -Werror -lm

MLX = -lmlx -lXext -lX11

$(NAME):
	cc $(FLAGS) main.c $(SRC) $(MLX) -o start

all:	$(NAME)

clean:
	rm -rf $(NAME)

fclean:	clean
	rm -rf $(OBJS)
	rm -rf start

re: fclean all

git:
	git add .
	git commit -m "$(m)"
	git push
