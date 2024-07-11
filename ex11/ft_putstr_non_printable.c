#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char c)
{
	int 	first;
	int	second;
	char	*base;

	base = "0123456789abcdef";
	first = c / 16;
	second = c % 16;

	if(first != 0)
	{
		ft_putchar(base[first]);
		ft_putchar(base[second]);
	}
	else
		ft_putchar('0');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char	c;

	while(str[i] != '\0')
	{
		if(str[i] <= 32 ||  str[i] == 127)
		{
			ft_putchar('\\');
			ft_print_hex(str[i]);		
		}
		i++;
	}
}
