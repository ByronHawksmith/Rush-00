void	ft_putchar(char c);

void	print_line(int line_len, int mode)
{
	int	i;
	char symbs[3];

	i = 0;
	symbs[2] = '*';
	if (mode == 0)
	{
		symbs[0] = '\\';
		symbs[1] = '/';
	}
	else if (mode == 1)
	{
		symbs[0] = '/';
		symbs[1] = '\\';
	}
	else 
	{
		symbs[0] = '*';
		symbs[1] = '*';
		symbs[2] = ' ';
	}
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

void	logic(int x, int y)
{
	int		i;

	i = y;
	if (x + y == 1)
		return ;
	while (i >= 1)
	{
		if (i == 1)
		{
			print_line(x, 0);
		}
		else if (i == y)
		{
			print_line(x, 1);
		}
		else
		{
			print_line(x, 2);
		}
		if (i != 1)
			ft_putchar('\n');
		i--;
	}
}

void	rush(int x, int y)
{
	if (y == 1)
		print_line(x, 1);	
	else
		logic(x, y);
}
