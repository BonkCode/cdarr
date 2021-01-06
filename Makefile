HDRS = hdrs
SRCS = 	srcs/append.c \
		srcs/free_cdarr.c \
		srcs/init_cdarr.c \
		srcs/pop.c
OBJS =	append.o \
		free_cdarr.o \
		init_cdarr.o \
		pop.o
NAME = cdarr.a

all:
	gcc -Wall -Wextra -Werror -c -I$(HDRS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	$(MAKE) clean > /dev/null

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
