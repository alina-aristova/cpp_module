NAME = megaphone

SOURCE_FILES =	contact.cpp main.cpp

OBJS = $(SOURCE_FILES:.cpp=.o)

CLANG = clang++
CLANG_FLAGS = -Wall -Wextra -Werror

%.o:	%.cpp
	$(CLANG) $(CLANG_FLAGS) -c $<

$(NAME):	$(OBJS)
	$(CLANG) $(CLANG_FLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all
