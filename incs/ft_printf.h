/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlegrand <nlegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:08:58 by nlegrand          #+#    #+#             */
/*   Updated: 2023/11/23 13:10:18 by nlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_h

// SETTINGS
# ifndef PRINT_FD
#  define PRINT_FD STDOUT_FILENO
# endif
# ifndef PRINT_SIZE
#  define PRINT_SIZE 1024
# endif

// UTILITY DEFINES
# define PRINT_INIT		0
# define PRINT_RESET	1
# define SET_CONV		"cs%pdiuxX"
# define SET_FLAG		"-0# +"
# define SET_HEX		"0123456789abcdef"
# define STR_NULL		"(null)"
# define STR_NIL		"(nil)"
# define STR_ZERO		"\0"
# define PREF_XL		"0x"
# define PREF_XU		"0X"
# define PREF_PLUS		"+"
# define PREF_SPACE		" "
# define PREF_MINUS		"-"

// FLAG MASKS
# define FM_MINUS	0x01
# define FM_ZERO	0x02
# define FM_HASH	0x04
# define FM_SPACE	0x08
# define FM_PLUS	0x10

typedef struct s_print	t_print;
struct s_print
{
	char			*s;
	int				fd;
	int				ret;
	char			buf[PRINT_SIZE];
	int				pos;
	unsigned int	convi;
	char			convc;
	int				gxl;
	char			fillc;
	unsigned int	flags;
	int				width;
	int				preci;
	char			*pref;
	int				(*handler)(t_print *, va_list);
	int				bad;
};

// MAIN
int		ft_printf(const char *s, ...);
int		ft_vdprintf(int fd, const char *s, va_list valist);
int		ft_dprintf(int fd, const char *s, ...);
int		ft_perr(const char *s, ...);

// UTILS
void	set_state(t_print *print, int mode, const char *s, int fd);
int		output_full(t_print *print);
int		fill_buf(t_print *print, char *s, int size, void *free);
// UTILS 2
int		malloc_safe(t_print *print, char **ptr, size_t n);
int		atoi_safe(const char *nptr);
int		maxi(int a, int b);
int		mini(int a, int b);
int		comb_len(char *a, char *b);

// CONV PARSER & UTILS
int		set_conv_state(t_print *print);
int		get_flags(t_print *print, char **s);
int		get_width(t_print *print, char **s);
int		get_preci(t_print *print, char **s);
int		get_conv(t_print *print, char **s);

// HANDLERS & UTILS
int		hdl_c(t_print *print, va_list valist);
int		hdl_s(t_print *print, va_list valist);
int		hdl_ps(t_print *print, va_list valist);
int		hdl_p(t_print *print, va_list valist);
int		hdl_di(t_print *print, va_list valist);
int		hdl_u(t_print *print, va_list valist);
int		hdl_x(t_print *print, va_list valist);
int		hdl_bad(t_print *print, va_list valist);
void	get_hex_str(t_print *print, char *x, size_t n, int caps);
void	get_diu_str(t_print *print, char *x, long n);

// FIELD UTILS
void	set_compat(t_print *print);
int		set_field_str(t_print *print, char *field, char *s, int max);
int		set_field_nums(t_print *print, char *field, char *x, int max);
void	set_field_bad(t_print *print, char *field, int *len);

#endif
