# Project Structure
NAME	=	libft.a
SRCDIR	=	srcs
OBJDIR	=	objs
INCDIR	=	incs
# srcs subfolders
MANDATORY_DIR	=	mandatory
BONUS_DIR		=	bonus
PRINTF_DIR		=	ft_printf
GETNEXTLINE_DIR	=	get_next_line
EXTRA_DIR		=	extra

# Other
RM	= rm -rf
AR	= ar rcs

# Compiler Options
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -MD
#CFLAGS	=	-Wall -Wextra -Werror -MD -g -gdwarf-4
CINCS	=	-I./$(INCDIR)

# Files
NAME	=	libft.a
MANDATORY	:=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c
MANDATORY	:=	$(addprefix $(MANDATORY_DIR)/, $(MANDATORY))
BONUS	:=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
BONUS	:=	$(addprefix $(BONUS_DIR)/, $(BONUS))
GETNEXTLINE	:=	get_next_line.c \
				get_next_line_utils.c \
				get_next_line_extra.c
GETNEXTLINE	:=	$(addprefix $(GETNEXTLINE_DIR)/, $(GETNEXTLINE))
PRINTF	:=	ft_printf.c \
			ft_printf_utils.c \
			ft_printf_utils2.c \
			ft_printf_conv_parser.c \
			ft_printf_handler_utils.c \
			ft_printf_handler_nums.c \
			ft_printf_handler_chars.c \
			ft_printf_field_utils.c
PRINTF	:=	$(addprefix $(PRINTF_DIR)/, $(PRINTF))
EXTRA	:=	ft_atois.c \
			ft_itoa2.c \
			ft_abs.c \
			ft_min.c \
			ft_max.c \
			ft_numlen.c \
			ft_lstrev.c
EXTRA	:=	$(addprefix $(EXTRA_DIR)/, $(EXTRA))
SRCS	=	$(MANDATORY)
SRCS	+=	$(BONUS)
SRCS	+=	$(GETNEXTLINE)
SRCS	+=	$(PRINTF)
SRCS	+=	$(EXTRA)

OBJS	:=	$(SRCS:.c=.o)
SRCS	:=	$(addprefix $(SRCDIR)/, $(SRCS))
OBJS	:=	$(addprefix $(OBJDIR)/, $(OBJS))

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@if [ ! -d $(dir $@) ]; then \
		mkdir -p $(dir $@); \
	fi
	$(CC) $(CFLAGS) $(CINCS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

ls:
	@echo $(SRCS)
	@echo $(OBJS)

.PHONY: all clean fclean re
