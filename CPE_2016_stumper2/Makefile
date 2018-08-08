##
## Makefile for boogle in /home/Spiki/Colles/CPE_2016_stumper2
## 
## Made by Filliat Etienne
## Login   <Spiki@epitech.net>
## 
## Started on  Wed Apr 26 12:29:10 2017 Filliat Etienne
## Last update Wed Apr 26 16:02:19 2017 Filliat Etienne
##

NAME	=	boggle

CFLAG	=	-W -Wall
#CFLAG	+=	-I include/boogle.h

RM	=	rm -rf

SRC	=	src/main.c	\
		src/str_fcts.c	\
		src/help.c	\
		src/make_tab.c	\
		src/make_tab2.c	\
		src/countline.c	\
		src/nexttab.c	\

TMP	=	$(SRC:.c=.c~)

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -g3 $(SRC) -o $(NAME) $(CFLAG)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(TMP)

re:	fclean all

.PHONY: all clean fclean re
