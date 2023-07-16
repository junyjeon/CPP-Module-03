NAME		=	ScavTrap

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
CXXFLAGS	+=	-fsanitize=address -g2

BUILD_DIR	=	bulid

SRC		=	main.cpp ScavTrap.cpp
OBJ		=	$(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRC))

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $@ $^
	@echo "$(GREEN)SUCCESS!$(END)"

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

clean:
	@$(RM) -r $(BUILD_DIR)

fclean: clean
	@$(RM) -r $(NAME)
	@echo "${YELLOW}> Cleaning of the ScavTrap has been done.❌${END}"

re: fclean all

.PHONY: all clean fclean re

Yellow : \033[0;33m
Green  : \033[0;32m