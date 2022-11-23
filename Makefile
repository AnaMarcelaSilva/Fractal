NAME = fractal.a

SRC =  ./main.c ./includes/libftprintf.a ./src/window.c ./src/events_calling.c ./hook/hooks.c

INC = ./includes/fractal.h


FLAGS = -Wall -Wextra -Werror -lm

MLX = -lmlx -Lminilibx -lXext -lX11

$(NAME):
	cc $(FLAGS) $(SRC) $(MLX) -o start

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
