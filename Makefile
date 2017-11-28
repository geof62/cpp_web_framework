NAME		=	app

SRCS		=	srcs/front.cpp \
			srcs/Framework/Application/Application.cpp \
			srcs/Framework/Application/Env.cpp

SRCS		+=	config/routing.cpp

SRCS		+=	srcs/Application/Controller/DefaultController.cpp

CPPFLAGS	=	-W -Wall -Wextra -std=c++11
CPPFLAGS	+= 	-I./incs/

OBJS		=	$(SRCS:.cpp=.o)

CC		=	g++
RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)
		$(RM) *~

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
