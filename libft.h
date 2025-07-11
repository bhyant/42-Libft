/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:57:58 by cmoitaj           #+#    #+#             */
/*   Updated: 2025/07/11 16:02:08 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

/* ************************************************************************** */
/*                                  STRUCTURES                                */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* ************************************************************************** */
/*                              FONCTIONS DE TYPE                            */
/* ************************************************************************** */

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

/* ************************************************************************** */
/*                          FONCTIONS DE CONVERSION                          */
/* ************************************************************************** */

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

/* ************************************************************************** */
/*                          FONCTIONS DE MÉMOIRE                            */
/* ************************************************************************** */

void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *buffer, int c, size_t n);

/* ************************************************************************** */
/*                          FONCTIONS DE CHAÎNES                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char*s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *find, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(const char *str, const char *set);
char	*ft_substr(const char *str, unsigned int start, size_t len);

/* ************************************************************************** */
/*                     FONCTIONS DE MANIPULATION DE CHAÎNES                 */
/* ************************************************************************** */

char	**ft_split(char const *str, char c);
void	ft_striteri(char *str, void (*f)(unsigned int, char *));
char	*ft_strmapi(char *str, char (*f)(unsigned int, char));

/* ************************************************************************** */
/*                          FONCTIONS D'ÉCRITURE                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);

/* ************************************************************************** */
/*                          FONCTIONS DE LISTES                             */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **list, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

#endif