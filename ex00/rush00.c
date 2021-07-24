#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putarray(char arr[])
{
	int arr_size_in_bytes;

	arr_size_in_bytes = ft_strlen(arr);
	write(1, arr, arr_size_in_bytes);
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

	ft_putarray(arr);
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

	ft_putarray(arr);
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
	
	y = y - 1;

	while (y >= 0)
	{
		if (y == 0 || y == y_arr_size)
		{
			print_horiz(x_arr, x_arr_size);
		}
		else
		{
			print_vert(x_arr, x_arr_size);
		}
		y--;
	}
}
