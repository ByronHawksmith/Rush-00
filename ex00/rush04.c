void	ft_putchar(char c);

/*
 * Determine which characters to use based on
 * a given mode.
 *
 * Mode 0: first row
 * Mode 1: last row
 * Mode 2: middle row
 */
void	determine_chars(int mode, char *chars)
{
	chars[2] = 'B';
	if (mode == 0)
	{
		chars[0] = 'A';
		chars[1] = 'C';
	}
	else if (mode == 1)
	{
		chars[0] = 'C';
		chars[1] = 'A';
	}
	else
	{
		chars[0] = 'B';
		chars[1] = 'B';
		chars[2] = ' ';
	}
}

/*
 * Print a given row by looping over an int
 * row_len.
 *
 * Print the appropriate char based on if
 * the character is in the last, first or
 * middle position.
 */
void	print_line(int line_len, char chars[])
{
	int	current_pos;

	current_pos = 0;
	while (current_pos < line_len)
	{
		if (current_pos == 0)
			ft_putchar(chars[0]);
		else if (current_pos == (line_len - 1))
			ft_putchar(chars[1]);
		else
			ft_putchar(chars[2]);
		current_pos++;
	}
}

/*
 * Print all rows by looping over an int
 * i which is initially set to y: the
 * number of rows.
 *
 * Determine the characters to use based on
 * if the current row is the first, last or
 * a middle row.
 *
 * Exceptions:
 *
 * If the dimensions are invalid:
 * i.e. (0, 0), (0, 1), (1, 0), print nothing.
 *
 * If printing the last row, don't print a \n
 * char.
 */
void	logic(int x, int y, char chars[])
{
	int	current_pos;
	int	last_position;

	current_pos = 0;
	last_position = y - 1;
	if (x + y == 1 || x + y == 0)
		return ;
	while (current_pos <= last_position)
	{
		if (current_pos == 0)
			determine_chars(0, chars);
		else if (current_pos == last_position)
			determine_chars(1, chars);
		else
			determine_chars(2, chars);
		print_line(x, chars);
		if (current_pos != last_position)
			ft_putchar('\n');
		current_pos++;
	}
}

/*
 * Creates a char array called chars of size
 * 3.
 *
 * Passes the x, y and chars variables into
 * the logic function.
 */
void	rush(int x, int y)
{
	char	chars[3];

	logic(x, y, chars);
}
