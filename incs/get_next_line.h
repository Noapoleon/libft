/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:44:30 by nlegrand          #+#    #+#             */
/*   Updated: 2023/11/23 14:33:10 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

typedef struct s_line
{
	char			buf[BUFFER_SIZE + 1];
	struct s_line	*next;
}				t_line;

typedef struct s_fds
{
	int				fd;
	char			buf[BUFFER_SIZE + 1];
	struct s_fds	*next;
}				t_fds;

char	*get_next_line(int fd);
char	*deplete_buf(char *buf);
char	*get_fd_buf(int fd, t_fds **fds);
void	remove_fd(int fd, t_fds **fds);
int		read_line(int fd, t_line **line, int *len, char *buf);
t_line	*read_one(int fd, int *ret, int *len, char *buf);
char	*make_line(t_line **line, int len);
void	split_buf_rest(char *tmpbuf, char *buf);
void	clear_line(t_line **line);
char	*get_endl(char *buf);

// Extra
int		gnl_w(int fd, char **line);
t_fds	**fds_save(t_fds **fds);
void	destroy_gnl_fds(void) __attribute__((destructor));

#endif
