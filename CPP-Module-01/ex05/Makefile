# **************************************************************************** #
#                                                                              #
#                                                                              #
#    Makefile                                                                  #
#                                                                              #
#    By: Mr. Norkum <mrnorkum@gmail.com>                                       #
#                                                                              #
#    Created: 2024/01/16 11:35:41 by Mr. Norkum                                #
#    Updated: 2024/01/16 15:52:17 by Mr. Norkum                                #
#                                                                              #
# **************************************************************************** #

NAME		=	harl

SRC			=	Harl.cpp \
				main.cpp

SRCDIR		= ./

OBJ			= $(addprefix $(OBJDIR)/, $(notdir $(patsubst %.cpp, %.o, $(SRC))))

OBJDIR		= ./OBJECT

CC			= c++

CFLAGS		= -std=c++98 -g -Wall -Wextra -Werror

RM			= rm -rf

ECHO		= echo

all: $(NAME)
a: all

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@$(ECHO) "\033[0;32m> Ex05 Compiled\033[0m"

$(OBJDIR) :
	@test -d $(OBJDIR) || mkdir $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	@$(CC) $(CFLAGS) -c -o $@ $< \
	&& $(ECHO) "\033[1;30m[C++] : Compiled $(notdir $<) \
	[\033[0;32mOk\033[1;30m]\033[0m" \
	|| $(ECHO) "\033[1;30m[C++] : Compiled $(notdir $<) \
	[\033[0;7;31mError\033[0;1;30m]\033[0m"

c: clean
clean:
	@$(RM) $(OBJDIR)
	@$(ECHO) "\033[0;34m> Ex05 Directory cleaned\033[0m"

f: fclean
fclean: clean
	@$(RM) $(NAME)
	@$(ECHO) "\033[0;35m> Ex05 Binary removed\033[0m"

r: re
re: fclean all

run: all
	@./$(NAME)

v: valgrind
valgrind: all
	@valgrind --leak-check=full --track-origins=yes ./$(NAME)

.PHONY : all clean fclean re run valgrind a c f r v

# **************************************************************************** #
#                                                                              #
#   Mr. Norkum                                                                 #
#                                                                              #
#   Instagram: @mrnorkum                                                       #
#   Telegram: @mrnorkum                                                        #
#   Discord: @mrnorkum                                                         #
#                                                     mail: mrnorkum@gmail.com #
# **************************************************************************** #
