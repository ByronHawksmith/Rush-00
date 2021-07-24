#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putarray(char arr[], int num_bytes)
{
	write(1, arr, num_bytes + 1);
}

void	print_horiz(char arr[], int size)
{
	int i;

	i = 0;
	while (i <= size)
	{
		if (i == 0 || i == size)
		{
			arr[i] = 'o';
		}
		else
		{
			arr[i] = '-';
		}
		i++;
	}

	ft_putarray(arr, size);
	ft_putchar('\n');
}

void	print_vert(char arr[], int size)
{
	int i;

	i = 0;
	while (i <= size)
	{
		if (i == 0 || i == size)
		{
			arr[i] = '|';
		}
		else
		{
			arr[i] = ' ';
		}
		i++;
	}

	ft_putarray(arr, size);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char x_arr[x];
	char y_arr[y];
	int i;
	int x_arr_size;
	int y_arr_size;

	i = 0;
	x_arr_size = (sizeof(x_arr) / sizeof(char)) - 1;	
	y_arr_size = (sizeof(y_arr) / sizeof(char)) - 1;	
	
	i = y - 1;

	while (i >= 0)
	{
		if (i == 0 || i == y_arr_size)
		{
			print_horiz(x_arr, x_arr_size);
		}
		else
		{
			print_vert(x_arr, x_arr_size);
		}
		i--;
	}
}
