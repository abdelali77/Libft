# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 12:34:49 by abmahfou          #+#    #+#              #
#    Updated: 2023/12/28 18:34:27 by abmahfou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_itoa.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_putchar_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_putstr_fd.c \
      ft_split.c \
      ft_strchr.c \
      ft_strdup.c \
      ft_striteri.c \
      ft_strjoin.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strmapi.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_strtrim.c \
      ft_substr.c \
      ft_tolower.c \
      ft_toupper.c 

SRC_B = ft_lstnew_bonus.c \
        ft_lstadd_front_bonus.c \
        ft_lstsize_bonus.c \
        ft_lstlast_bonus.c \
        ft_lstadd_back_bonus.c \
        ft_lstdelone_bonus.c \
        ft_lstclear_bonus.c \
        ft_lstiter_bonus.c \
        ft_lstmap_bonus.c 

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

OBJS = $(SRC:.c=.o)

OBJS_B = $(SRC_B:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

clean: 
	rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJS_B) $(HEADER)
	ar rcs $(NAME) $(OBJS_B)