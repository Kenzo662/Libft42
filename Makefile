SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

NAME = libft.a

CC = gcc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
