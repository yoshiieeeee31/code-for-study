NAME = fizzbuzz
C_FILE = fizzbuzz.c main.c output.c

$(NAME) : %.c
	cc -Wall -Wextra -Werror $< -o $@

.DEFAULT_GOAL = all

all:
		make $(NAME)

clean: 
		rm -f $(NAME)
re:
		clean all
