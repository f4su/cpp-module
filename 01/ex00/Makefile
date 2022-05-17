NAME	= serebruh
CC		= clang++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
GREEN	= \033[0;32m
RED		= \033[0;31m
RESET	= \033[0m

FUNC	= Zombie \
		  ZombieHorde \
		  main \
		  randomChump

SRC		= $(addsuffix .cpp, $(FUNC))
OBJ		= $(addsuffix .o, $(FUNC))

all		: $(NAME)

.cpp.o	: $(SRC)
	@$(CC) $(CFLAGS) -c $^ -o $@

$(NAME)	: $(OBJ)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "$(GREEN)make done$(RESET)"

clean	:
	@$(RM) $(OBJ)
	@echo "$(RED)clean done$(RESET)"

fclean	: clean
	@$(RM) $(NAME)
	@echo "$(RED)fclean done$(RESET)"

re		: fclean all

.PHONY	: all clean fclean re
