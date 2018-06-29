NAME		=	framework.a

SRCS		=	srcs/main.cpp \
				srcs/Application/Application.cpp \
				srcs/Router/RouteCollection.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXXFLAGS	=	-Wextra -Wall -std=c++17
CXXFLAGS	+= 	-I./incs/

CXX			=	g++

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rvs target/$(name) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all