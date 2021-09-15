NAME = libftprintf.a
SRCS =	ft_putchar_fd.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_printf.c \
			print_c.c \
			print_d_and_u.c \
			print_p.c \
			print_lx.c \
			print_percent.c \
			print_s.c \
			print_u.c \
			print_x.c \
			ft_calloc.c \
			ft_bzero.c \
			ft_memset.c \
			convert_dec_to_hexstr.c \

OBJS = ${SRCS:.c=.o}
CC		= gcc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS} 

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re .c.o 
