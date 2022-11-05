NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
git  = libft.h

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c\
ft_memset.c ft_bzero.c ft_memcpy.c ft_atoi.c ft_strlcpy.c ft_memcmp.c ft_strlcpy.c ft_strnstr.c\
ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_memmove.c ft_putnbr_fd.c ft_strlcat.c\
ft_strrchr.c ft_calloc.c ft_strdup.c ft_strmapi.c ft_strjoin.c ft_striteri.c\
ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\

SRC_B = ft_lstadd_front_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\


OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(DEPS)
	$(CC) -o $@ -c $< $(CFLAGS)

all:	$(NAME)

clean:
	rm -f *.o

bonus: $(NAME) $(OBJ_B)
	ar rcs $(NAME) $(OBJ_B)

fclean: clean
	rm -f *.a

re: fclean $(NAME)

.PHONY: clean bonus fclean re all