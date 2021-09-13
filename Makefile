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
            ft_strlcat.c \
            ft_strlen.c \
            ft_toupper.c \
            ft_tolower.c \
            ft_strchr.c \
            ft_strrchr.c \
            ft_strncmp.c \
            ft_memchr.c \
            ft_memcmp.c \
            ft_strnstr.c \
            ft_atoi.c \
            ft_calloc.c \
            ft_strdup.c \
            ft_substr.c \
            ft_strjoin.c \
            ft_strtrim.c \
            ft_split.c \
            ft_itoa.c \
            ft_strmapi.c \
            ft_striteri.c \
            ft_putchar_fd.c \
            ft_putstr_fd.c \
            ft_putendl_fd.c \
            ft_putnbr_fd.c \

OBJ = $(SRCS:.c=.o)

CC = clang -Wall -Wextra -Werror

.c.o:
	@$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
    # @echo "Building the lib. $(NAME) ..."
    # -r indica que queremos adicionar um arquivo '.o' para a biblioteca '.a'
    # -c indica que, caso o arquivo '.a' não exista, deverá ser criado.
    # -s solicita ao comando ar que seja criado um índice no arquivo final
	@ar -rcs $(NAME) $(OBJ)
	@echo "$(NAME) criada com sucesso..."

clean:
    # @echo "Removendo arquivos .o ..."
	@rm -f *.o

fclean: clean
    # @echo "Removendo a biblioteca $(NAME)"
	@rm -f $(NAME)

re: fclean all

demo: all
	$(CC) -g ./demo/main.c -L. -lft -o ./demo/main
# -fsanitize=address
.PHONY: all clean fclean demo
