
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP
NAME = easyfind.out

OBJ_DIR = obj
SRCS = main.cpp

OBJS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRCS))
DEP = $(OBJS:.o=.d)

all : $(NAME)

$(NAME) : $(OBJS) Makefile
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
-include $(DEP)
