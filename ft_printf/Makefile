# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imorina <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 14:32:22 by imorina           #+#    #+#              #
#    Updated: 2021/12/06 14:32:27 by imorina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT		=	./libft			# variable libft
LIBNAME		=	libft.a			# " crée un libft.a
NAME		=	libftprintf.a		# " crée un libft.h
CFLAGS		=	-Wall -Werror -Wextra -c
CC		=	gcc
RM		=	rm -f			# " supprimer
AR		=	ar -rcs			# " archiver
FILES		=	ft_printf.c

OBJ		=	$(FILES:.c=.o)		# transforme tous les .c en .o

all: $(NAME)

$(NAME):
	@$(MAKE) -C $(LIBFT)			# compiler la libft
	@cp $(LINFT)/$(LIBNAEM) $(NAME)		# copier la libft dans libftprintf.a
	@$(CC) $(CFLAGS) $(FILES)		# compiler + flags + fichiers
	@$(AR) $(NAME) $(OBJ)			# archiver / sauvegarder .o

clean:
	@$(RM) $(OBJ)				# supprimer les .o de ft_printf
	@$(make) -C $(LIBFT) clean		# via commande make clean

fclean: clean					# référence à clean
	@$(RM) $(NAME)				# supprimer libft.a & libftprintf.a
	@$(MAKE) -C $(LIBFT) fclean		

re: fclean all

.PHONY: all clean fclean re test tclean valgrind
