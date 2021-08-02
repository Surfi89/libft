# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/27 09:39:13 by ajordan-          #+#    #+#              #
#    Updated: 2021/08/02 13:14:07 by ajordan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

INCLUDE_DIR	=	includes

SRCS_DIR 	=	sources

SRC_FILES	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
				ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
				ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS 		= 	$(addprefix $(SRCS_DIR), $(SRC_FILES))

OBJS_DIR	=	objs
OBJS		=	$(subst $(SRCS_DIR), $(DIR_OBJS), $(SRCS:.c=.o))
OBJS_PREFIX	=	$(addprefix $(OBJS_DIR)/, $(OBJS))

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c
			@mkdir -p $(OBJS_DIR)
			@echo "Compiling: $<"
			@$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS_PREFIX)
			@ar rcs $(NAME) $(OBJS_PREFIX)
			@echo "Libft compiled!"

clean:
			@$(RM) -r $(OBJS_DIR)
			@echo "Objects cleaned!"

fclean:		clean
			@$(RM) $(NAME)
			@echo "Executable cleaned!"

re:			fclean all

.PHONY:		all clean fclean re
