#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: the input .
*/

void print_line(int n)
{
	int n, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

