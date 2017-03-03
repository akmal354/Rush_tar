##
## Makefile for Makefile in /home/guillaume/Desktop/CODE/clone/Rush_tar
## 
## Made by 
## Login   <morin_n@epitech.net>
## 
## Started on  Fri Mar  3 23:28:34 2017 
## Last update Fri Mar  3 23:42:47 2017 
##

CC	= gcc

RM	= rm -f

NAME	=

SRCS	=

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
