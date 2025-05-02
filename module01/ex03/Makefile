NAME = violence

CXX = g++ #-fsanitize=address -g3
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) # $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
