##
## Makefile for Makefile in /home/guillaume/Desktop/CODE/clone/Rush_tar
## 
## Made by 
## Login   <morin_n@epitech.net>
## 
## Started on  Fri Mar  3 23:28:34 2017 
## Last update Sat Mar  4 18:05:59 2017 
##

CC	= gcc -g

RM	= rm -f

NAME	= unarchiv

CFLAGS	+= -Iinclude
CFLAGS	+= -Wall -Werror -Wextra

SRCS	= ./src/untar.c \
	./src/modif_chmod.c \

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
