NAME		=	./target/front

SRCS		=	Config/routing.cpp \
				Config/config.cpp

OBJS		=	$(srcs:.cpp=.o)

CPP_FLAGS	=	-Wexta -Wall

CC			=	g++

FWK_LIB		=	-L../framework/target -lframework

all:		$(NAME)

$(NAME):	($OBJS)
			$(CC) $(OBJS) -o $(NAME)