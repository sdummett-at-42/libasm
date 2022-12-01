# **************************************************************************** #
#       COMANDS                                                                #
# **************************************************************************** #
NASM		=	nasm
RM			=	rm

# **************************************************************************** #
#       TITLE                                                                  #
# **************************************************************************** #
NAME		=	libasm
FT_STRLEN	= ft_strlen

# **************************************************************************** #
#       FLAGS                                                                  #
# **************************************************************************** #
CFLAGS		=	-felf64
INCS		=	-Iincs
RMFLAGS		=	-rf

# **************************************************************************** #
#       SOURCES                                                                #
# **************************************************************************** #
SRCS		=	srcs/hello.s

# **************************************************************************** #
#       RULES                                                                  #
# **************************************************************************** #
OBJS		=	$(SRCS:.s=.o)

%.o			:	%.s
				$(NASM) $(CFLAGS) $(INCS) $< -o $@

$(NAME)		:	$(OBJS)
				ld -o $@ $(OBJS)

$(FT_STRLEN):
				nasm -felf64 srcs/ft_strlen.s && \
				gcc -Wall -Wextra -Werror -g3 srcs/ft_strlen.o srcs/callft_strlen.c\
				-o ft_strlen

all			:	$(NAME)

clean		:
				$(RM) $(RMFLAGS) $(OBJS)

fclean		:	clean
				$(RM) $(RMFLAGS) $(NAME)

re			:	fclean all

# **************************************************************************** #
#       PHONY                                                                  #
# **************************************************************************** #
.PHONY		:	all clean fclean re