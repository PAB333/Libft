# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 15:50:32 by pibreiss          #+#    #+#              #
#    Updated: 2024/11/13 21:00:12 by pibreiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
BONUS_DIR = _bonus
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c \
	  ft_strlen.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_strlcat.c \
	  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	  ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  
BONUS_SRCS = $(BONUS_DIR)/ft_lstnew.c $(BONUS_DIR)/ft_lstadd_front.c \
			$(BONUS_DIR)/ft_lstsize.c $(BONUS_DIR)/ft_lstlast.c \
			$(BONUS_DIR)/ft_lstadd_back.c $(BONUS_DIR)/ft_lstdelone.c \
			$(BONUS_DIR)/ft_lstclear.c 

OBJS = $(SRC:%.c=%.o)
BONUS_OBJS = $(BONUS_SRCS:%.c=%.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all