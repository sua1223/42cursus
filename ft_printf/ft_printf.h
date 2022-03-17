#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_hexdecimal(unsigned int nbr);
int	ft_hexdecimal_2(unsigned int nbr);
int	ft_unsigned(int nbr);
int	ft_pointer(void *ptr);
int	ft_pointerhedexcimal(unsigned long nbr);
#endif
