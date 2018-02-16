cmake_minimum_required(VERSION 3.9)
project(ft_printf)

set(CMAKE_CXX_STANDARD 11)

file(GLOB LIBFT
        libft/*.c
        libft/*.h
        )

add_executable(ft_printf
        author
        LICENSE
        README.md
        src/ft_printf.c
        src/test.c
        ${LIBFT}
        src/ft_c-d-s_ind.c src/ft_itoa_base.c)




