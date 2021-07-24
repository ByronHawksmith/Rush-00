void	ft_putchar(char c);

void	print_line(int line_len, char symbols[])
{
	int	i;

	i = 0;
	while (i < line_len)
	{
		if (i == 0)
			ft_putchar(symbols[0]);	
		else if (i == (line_len - 1))
			ft_putchar(symbols[2]);
		else
			ft_putchar(symbols[1]);
		i++;
	}
}

void	print_one_line(int line_len, char front, char back, char star)
{
	int	i;

	i = 0;
	while (i < line_len)
	{
		if (i == 0)
			ft_putchar(front);	
		else if (i == (line_len - 1))
			ft_putchar(back);	
		else
			ft_putchar(star);
		i++;
	}
}

void	logic(int x, int y, char horiz_symb[], char vert_symb[])
{
	int		i;
	char	symbols[3];

	i = y;
	if (x + y == 1)
		return ;
	while (i >= 1)
	{
		if (i == 1)
		{
			symbols[0] = horiz_symb[2];
			symbols[1] = horiz_symb[4];
			symbols[2] = horiz_symb[3];
			print_line(x, symbols);
		}
		else if (i == y)
		{
			symbols[0] = horiz_symb[0];
			symbols[1] = horiz_symb[4];
			symbols[2] = horiz_symb[1];
			print_line(x, symbols);
		}
		else
		{
			symbols[0] = vert_symb[0];
			symbols[1] = vert_symb[1];
			symbols[2] = vert_symb[0];
			print_line(x, symbols);
		}
		if (i != 1)
			ft_putchar('\n');
		i--;
	}
}

void	rush(int x, int y)
{
	char	horiz_symb[5];
	char	vert_symb[2];

	horiz_symb[0] = '/';
	horiz_symb[1] = '\\';
	horiz_symb[2] = '\\';
	horiz_symb[3] = '/';
	horiz_symb[4] = '*';
	vert_symb[0] = '*';
	vert_symb[1] = ' ';

	if (y == 1)
		print_one_line(x, '/', '\\', '*');		
	else
		logic(x, y, horiz_symb, vert_symb);
}
