NAME = libftprintf.a
SRCS =	ft_putchar_fd.c \
			ft_puthexbignbr.c \
			ft_puthexnbr.c \
			ft_putpointer.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_toupper.c \
			printf_test.c \
			print_c.c \
			print_d_and_u.c \
			print_p.c \
			print_lx.c \
			print_percent.c \
			print_s.c \
			print_u.c \
			print_x.c \

BONUS = ft_lstiter_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstdelone_bonus.c \

OBJS = ${SRCS:.c=.o}
OBJS_B = ${BONUS:.c=.o}
CC		= gcc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

bonus: ${OBJS} ${OBJS_B}
		ar rcs ${NAME} ${OBJS} ${OBJS_B} 

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS} ${OBJS_B}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re .c.o bonus
