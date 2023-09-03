#   _       _________ ______   _______ _________
#  ( \      \__   __/(  ___ \ (  ____ \\__   __/
#  | (         ) (   | (   ) )| (    \/   ) (   
#  | |         | |   | (__/ / | (__       | |   
#  | |         | |   |  __ (  |  __)      | |   
#  | |         | |   | (  \ \ | (         | |   
#  | (____/\___) (___| )___) )| )         | |   
#  (_______/\_______/|/ \___/ |/          )_(   
                                             
RED			=	\033[0;31m
GREEN		=	\033[1;32m
YELLOW		=	\033[1;33m
BLUE		=	\033[0;34m
CYAN		=	\033[1;36m
RESET		=	\033[0m

NAME	=	libft.a

SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
				ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
				ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strcmp.c \
				ft_putstr.c ft_is_whitespace.c ft_strcpy.c ft_tohex.c ft_get_distance.c

OBJS = $(SRCS:.c=.o)

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
				ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c \
				ft_lstiter.c

BONUS_OBJS	= $(BONUS:.c=.o)

CC	=	gcc
RM	=	rm -f
FLAGS	= -Wall -Wextra -Werror -g

$(NAME): 
	@$(CC) $(FLAGS) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@echo "\n✅ ${BLUE}Libft Done!$(RESET)"
		
all: $(NAME)

bonus:
	@$(CC) $(FLAGS) -c $(BONUS)
	@ar rc $(NAME) $(BONUS_OBJS)
	@echo "\n✅ ${BLUE}Libft Done!$(RESET)"

clean:
	@$(RM) $(OBJS) 
	@$(RM) $(BONUS_OBJS)
	@echo "🧽 $(GREEN)Libft Clean: $(YELLOW)Removed all the \".o\" files$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "🧽 $(GREEN)Libft Fclean: $(YELLOW)Removed the executables$(RESET)"

re: fclean all

.PHONY: all clean fclean re bonus