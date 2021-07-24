void	ft_putchar(char c);

void	print_line(int line_len, char symbols[])
{
	int		i;

	i = 0;
	while (i < line_len)
	{
		if (i == 0 || i == (line_len - 1))
		{
			ft_putchar(symbols[0]);
		}
		else
		{
			ft_putchar(symbols[1]);
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int		i;
	char	horiz_symb[2];
	char	vert_symb[2];

	i = y;
	horiz_symb[0] = 'o';
	horiz_symb[1] = '-';
	vert_symb[0] = '|';
	vert_symb[1] = ' ';
	if (x + y == 1)
	{
		return;
	}
	while (i >= 1)
	{
		if (i == 1 || i == y)
		{
			print_line(x, horiz_symb);
		}
		else
		{
			print_line(x, vert_symb);
		}
		if (i != 1)
			ft_putchar('\n');
		i--;
	}
}
