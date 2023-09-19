#include "main.h"

/**
 *  _strlen - function that returns the length of a string.
 *
 *  @s: pointer type char
 *
 *  return: Always  (0)
*/

int _strlen(char *s)
{
	int l3ezwa = 0;
	int r = 0;

	while (s[r] != '\0')
	{
		l3ezwa = l3ezwa + 1;
		r++;
	}
	return (l3ezwa);
}
