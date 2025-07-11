# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 10:27:26 by tbhuiyan          #+#    #+#              #
#    Updated: 2025/07/11 16:06:58 by tbhuiyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g2 -MMD
AR			= ar rc
RM			= rm -f

# Colors
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
RED			= \033[0;31m
BLUE		= \033[0;34m
PURPLE		= \033[0;35m
CYAN		= \033[0;36m
RESET		= \033[0m

# ================================= SOURCES =================================== #

SRCS		= ft_isalpha.c \
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
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c \
			  ft_substr.c \
			  ft_striteri.c \
			  ft_strmapi.c \
			  ft_strjoin.c \
			  ft_split.c \
			  ft_itoa.c \
			  ft_strtrim.c

SRCS_BONUS	= ft_lstadd_back_bonus.c \
			  ft_lstadd_front_bonus.c \
			  ft_lstclear_bonus.c \
			  ft_lstdelone_bonus.c \
			  ft_lstiter_bonus.c \
			  ft_lstlast_bonus.c \
			  ft_lstmap_bonus.c \
			  ft_lstnew_bonus.c \
			  ft_lstsize_bonus.c

# ================================= OBJECTS =================================== #

OBJS		= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)
DEPS		= $(OBJS:.o=.d) $(OBJS_BONUS:.o=.d)

INC			= libft.h

# ================================== RULES ==================================== #

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(PURPLE)🔧 Assemblage de la bibliothèque...$(RESET)"
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)✅ $(NAME) créée avec succès !$(RESET)"

%.o: %.c $(INC)
	@echo "$(CYAN)⚙️  Compilation de $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(OBJS_BONUS)
	@echo "$(YELLOW)🌟 Compilation des fonctions bonus...$(RESET)"
	@$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)
	@echo "$(GREEN)🎉 Bibliothèque avec bonus créée !$(RESET)"

clean:
	@echo "$(RED)🧹 Nettoyage des fichiers objets...$(RESET)"
	@$(RM) $(OBJS) $(OBJS_BONUS) $(DEPS)
	@echo "$(GREEN)✨ Fichiers objets supprimés !$(RESET)"

fclean: clean
	@echo "$(RED)🗑️  Suppression de $(NAME)...$(RESET)"
	@$(RM) $(NAME)
	@echo "$(GREEN)🎯 Nettoyage complet terminé !$(RESET)"

re: fclean
	@echo "$(BLUE)🔄 Reconstruction complète...$(RESET)"
	@$(MAKE) all

help:
	@echo "$(CYAN)📖 Commandes disponibles :$(RESET)"
	@echo "  $(GREEN)make$(RESET)        - Compile la bibliothèque"
	@echo "  $(GREEN)make bonus$(RESET)  - Compile avec les fonctions bonus"
	@echo "  $(GREEN)make clean$(RESET)  - Supprime les fichiers objets"
	@echo "  $(GREEN)make fclean$(RESET) - Nettoyage complet"
	@echo "  $(GREEN)make re$(RESET)     - Reconstruction complète"
	@echo "  $(GREEN)make help$(RESET)   - Affiche cette aide"

# ================================= PHONY ==================================== #

.PHONY: all clean fclean re bonus help

# ============================== DEPENDENCIES =============================== #

-include $(DEPS)