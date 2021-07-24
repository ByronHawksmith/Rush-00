void	ft_putchar(char c);

void	determine_symbs(int mode, char *symbs)
{
	symbs[2] = 'B';
	if (mode == 0)
	{
		symbs[0] = 'C';
		symbs[1] = 'A';
	}
	else if (mode == 1)
	{
		symbs[0] = 'A';
		symbs[1] = 'C';
	}
	else
	{
		symbs[0] = 'B';
		symbs[1] = 'B';
		symbs[2] = ' ';
	}
}

void	print_line(int line_len, char symbs[])
{
	int	i;

	i = 0;
	while (i < line_len)
	{
		if (i == 0)
			ft_putchar(symbs[0]);
		else if (i == (line_len - 1))
			ft_putchar(symbs[1]);
		else
			ft_putchar(symbs[2]);
		i++;
	}
}

void	logic(int x, int y, char symbs[])
{
	int		i;

	i = y;
	if (x + y == 1)
		return ;
	while (i >= 1)
	{
		if (i == 1)
			determine_symbs(0, symbs);
		else if (i == y)
			determine_symbs(1, symbs);
		else
			determine_symbs(2, symbs);
		print_line(x, symbs);
		if (i != 1)
			ft_putchar('\n');
		i--;
	}
}

void	rush(int x, int y)
{
	char	symbs[3];

	if (y == 1)
	{
		determine_symbs(1, symbs);
		print_line(x, symbs);
	}
	else
	{
		logic(x, y, symbs);
	}
}
