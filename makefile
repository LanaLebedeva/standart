NAME 		:= libft.a

DIR 		:= ./

HEADER 		:= ./libft.h

HEADER_DIR	:= ./

FUNCTIONS 	:= ft_isalpha.c\
            ft_isdigit.c\
            ft_isalnum.c\
            ft_isascii.c\
            ft_isprint.c\
            ft_toupper.c\
            ft_tolower.c\
            ft_memset.c\
            ft_bzero.c\
            ft_memcpy.c\
            ft_memccpy.c\
            ft_memmove.c\
            ft_memcmp.c\
            ft_memchr.c\
            ft_strlen.c\
			ft_strdup.c\
			ft_strcpy.c\
			ft_strncpy.c\
			ft_strcat.c\
			ft_strncat.c\
			ft_strlcat.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strstr.c\
			ft_strnstr.c\
			ft_strcmp.c\
			ft_strncmp.c\
			ft_atoi.c\
			ft_memalloc.c\
			ft_memdel.c\
			ft_strnew.c\
			ft_strdel.c\
			ft_strclr.c

SOURCE		:= $(addprefix $(DIR), $(FUNCTIONS))

OBJECTS		:= $(SOURCE:.c=.o)

FLAGS		?= -Wall -Wextra -Werror

all: $(OBJECTS) $(NAME)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@ -I $(HEADER_DIR) -MD

-include  *.d

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS) $?
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS) *.d

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re debug
