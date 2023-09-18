#include "main.h"

/**
 * _puts - function that prints a string.
 *
 * _str: a pointer type char
*/

void _puts(char *str)
{
	while (*str != ('\0'))
	{
		*str++;
		_putchar(*str);
	}
		_putchar('\n');
}
