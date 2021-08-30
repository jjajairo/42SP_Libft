NAME	= libft.a

SRCS	=	ft_bzero.c \
            ft_isalnum.c \
            ft_isalpha.c \
            ft_isascii.c \
            ft_isdigit.c \
            ft_isprint.c \
            ft_memcpy.c \
            ft_memmove.c \
            ft_memset.c \
            ft_strlcpy.c \
            ft_strlen.c

OBJ = $(SRCS:.c=.o)

CC = clang -Wall -Wextra -Werror -g

.c.o:
	@echo "Compilando $< >> $@..."
	@$(CC) -c $< -o $@

all: $(NAME) clean

$(NAME): $(OBJ)
	@echo " "
	@echo "Construindo a biblioteca $(NAME) ..."
    # -r indica que queremos adicionar um arquivo '.o' para a biblioteca '.a'
    # -c indica que, caso o arquivo '.a' não exista, deverá ser criado.
    # -s solicita ao comando ar que seja criado um índice no arquivo final
	@ar -rcs $(NAME) $(OBJ)
	@echo "$(NAME) criada com sucesso..."

clean:
	@echo "Removendo arquivos .o ..."
	@rm -f $(OBJ)

fclean: clean
	@echo "Removendo a biblioteca $(NAME)"
	@rm -f $(NAME)

re: fclean all

teste:
	$(CC) ./test/main.c -L. -lft -o ./test/main


.PHONY: all clean fclean teste
