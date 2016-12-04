##
## Makefile for printf in /home/lombar_e/rendu/PSU/PSU_2016_my_printf
##
## Made by Thomas Lombard
## Login   <lombar_e@epitech.net>
##
## Started on  Sun Dec 06 15:51:40 2016 Thomas Lombard
## Last update Sun Dec 06 15:51:40 2016 Thomas Lombard
##

NAME		=  libmy.a

CFLAGS		+= -W -Wall -Wextra
CFLAGS		+= -ansi -pedantic
CFLAGS		+= -I includes/

LDFLAGS		= -L ./ -lmy

CC		=  gcc

AR		= ar rc

RAN		= ranlib

TAR		= tar xzvf

RM		=  rm -f

PROJ_SOURCE	=  printf__calc.c		\
		   printf__constructor.c	\
		   printf__functions_base.c	\
		   printf__functions_chars.c	\
		   printf__functions_float.c	\
		   printf__functions_int.c	\
		   printf__functions_other.c	\
		   printf__getnbr.c		\
		   printf__getters.c		\
		   printf__lib.c		\
		   printf__parse.c		\
		   printf__printf.c		\
		   printf__vprintf.c

LIB_SOURCE	=  istype.c			\
		   maths.c			\
		   memset.c			\
		   strlen.c

PROJ_FILES	=  $(addprefix src/, $(PROJ_SOURCE))

LIB_FILES	=  $(addprefix src/lib/, $(LIB_SOURCE))

LIB		=  $(LIB_FILES:.c=.o)

PROJ		=  $(PROJ_FILES:.c=.o)

$(NAME): $(LIB) $(PROJ)
	$(AR) $(NAME) $(LIB) $(PROJ)
	$(RAN) $(NAME)

all: $(NAME)

test: $(NAME)
	$(TAR) src/main_test.tar.gz
	$(CC) -c src/main.c -o src/main.o -I includes/
	$(CC) -o test src/main.o $(LDFLAGS)

clean:
	$(RM) $(LIB) $(PROJ)
	$(RM) src/main.o

fclean: clean
	$(RM) $(NAME)
	$(RM) test
	$(RM) src/main.c

re: fclean all

.PHONY: all clean fclean re
