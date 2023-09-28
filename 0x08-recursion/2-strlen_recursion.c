#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: pointer type char
 *
 * Return: Always (0)
*/

int _strlen_recursion(char *s)
{
	if (s <= 0)
		_putchar('\n');
	else
	{
		count = count + 1;
		return (count + _strlen_recursion(s + 1));
	}
}
