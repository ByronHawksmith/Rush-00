#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_line(int line_len, char symbols[])
{
	int	i;

	i = 0;
	while (i < line_len)
	{
		if (i == 0 || i == (line_len - 1))
			ft_putchar(symbols[0]);
		else
			ft_putchar(symbols[1]);
		i++;
	}
}
