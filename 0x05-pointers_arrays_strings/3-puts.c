#include "main.h"

/**
 * _puts - function that prints a string.
 *
 * _str: a pointer type char
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
