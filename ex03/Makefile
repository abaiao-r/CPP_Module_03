# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 14:30:45 by abaiao-r          #+#    #+#              #
#    Updated: 2023/09/20 13:14:41 by abaiao-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler settings	
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -g #-fsanitize=address

# Directories
SRCDIR = src
OBJDIR = objs

# Source Files

SRCS = 	$(SRCDIR)/main.cpp \
		$(SRCDIR)/ClapTrap.cpp \
		$(SRCDIR)/ScavTrap.cpp \
		$(SRCDIR)/FragTrap.cpp \
		$(SRCDIR)/DiamondTrap.cpp

OBJS = 	$(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Targets
NAME = Now_it_is_weird!

all: 	$(NAME)


clean:
		rm -rf $(OBJDIR)

fclean:	clean
		rm -f $(NAME)

run:	fclean all
		./$(NAME)

re:		fclean all

test: 	all
		./$(NAME)

$(NAME): 	$(OBJS)
			$(CXX) $(OBJS) $(CXXFLAGS) -o  $(NAME) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: all clean fclean re run test