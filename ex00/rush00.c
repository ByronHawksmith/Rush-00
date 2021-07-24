#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putarray(char arr[], int num_bytes)
{
	write(1, arr, num_bytes);
}

void	print_line(int line_len, char symbols[])
{
	char	arr[line_len];
	int		arr_size;
	int		i;

	arr_size = sizeof(arr) / sizeof(char);
	i = 0;
	while (i < arr_size)
	{
		if (i == 0 || i == (arr_size - 1))
		{
			arr[i] = symbols[0];
		}
		else
		{
			arr[i] = symbols[1];
		}
		i++;
	}
	ft_putarray(arr, arr_size);
	ft_putchar('\n');
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
		i--;
	}
}
