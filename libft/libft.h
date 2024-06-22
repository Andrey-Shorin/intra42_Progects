/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nposidon <nposidon@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:28:59 by nposidon          #+#    #+#             */
/*   Updated: 2021/10/26 21:07:03 by nposidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isascii(int d);
int		ft_strlen(const char *d);
int		ft_toupper(int f);
int		ft_tolower(int g);
char	*ft_strchr(const char *s, char c);
void	*ft_memset(void *b, int c, int len);
void	*ft_bzero(void *b, int len);
void	*ft_memcpy(void *dst, const void *src, int size);
void	*ft_memmove(void *dst, const void *src, int len);
int		ft_strlcpy(char *a, const char *b, int n);
int		ft_strlcat(char *a, const char *b, int n);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *d, const char *t, int s);
void	*ft_memchr(const void *S, int C, int len);
int		ft_memcmp(const void *g, const void *f, int n);
char	*ft_strnstr(const char *y, const char *neeed, int len);
char	*ft_substr(char const *s, unsigned int start, int len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *dest);
char	*ft_itoa(int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_strdup(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_calloc(int num, int size);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif