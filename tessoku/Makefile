NAME        = myprogram
SRCS        = myprogram.c
OBJS        = $(SRCS:.cpp=.o)
CXX         = clang++
CXXFLAGS    = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

.PHONY: clean
clean:
	$(RM) $(OBJS)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all
