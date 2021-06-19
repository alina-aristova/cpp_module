NAME 	= serialize

SRCS	= ./main.cpp 

OBJS 	= $(SRCS:.cpp=.o)

CC 		= clang++
RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra  -std=c++98 

all:
	@$(MAKE) $(NAME) 

%.o:    %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo $(NAME) compiled!

clean:
	@$(RM) $(OBJS)
	@echo clean .o files

fclean: clean
	@$(RM) $(NAME)
	@echo $(NAME) removed!

re:	fclean $(NAME)