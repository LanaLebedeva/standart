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
            ft_memchr.c


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
    
debug:
	gcc -g -O0 $(FLAG) -c *.c -I $(HEADER_DIR) -MD

.PHONY: all clean fclean re debug
