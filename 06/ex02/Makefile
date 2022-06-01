NAME	= identify
CC		= clang++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror #-fsanitize=address -g3 -ggdb3
GREEN	= \033[0;32m
RED		= \033[0;31m
YELLOW	= \033[0;33m
RESET	= \033[0m

FUNC	= main	\
		  Base	\
		  A		\
		  B		\
		  C

SRC		= $(addsuffix .cpp, $(FUNC))
OBJ		= $(addsuffix .o, $(FUNC))


all		: $(NAME)

.cpp.o	: $(SRC)
	@$(CC) $(CFLAGS) -c $^ -o $@

$(NAME)	: $(OBJ)
	@echo "$(YELLOW)compiling...$(RESET)"
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
