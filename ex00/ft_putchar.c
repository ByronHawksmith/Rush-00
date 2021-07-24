#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putarray(char arr[])
{
	int arr_size_in_bytes;

	arr_size_in_bytes = ft_strlen(arr);
	write(1, arr, arr_size_in_bytes);
}
