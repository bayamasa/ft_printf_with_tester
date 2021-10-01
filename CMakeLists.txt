cmake_minimum_required(VERSION 3.14)
project(ft_printf)
set(CMAKE_CXX_STANDARD 11)
add_compile_options(-Wall -Wextra -Werror)
add_library(libftprintf 
	STATIC 
		ft_putchar_fd.c 
		ft_putnbr_fd.c 
		ft_putstr.c 
		ft_strlen.c 
		ft_toupper.c 
		ft_printf.c 
		ft_print_c.c 
		ft_print_d_and_u.c 
		ft_print_p.c 
		ft_print_lx.c 
		ft_print_percent.c 
		ft_print_s.c 
		ft_print_x.c 
		ft_calloc.c 
		ft_bzero.c 
		ft_memset.c 
		ft_convert_dec_to_hexstr.c 
)
