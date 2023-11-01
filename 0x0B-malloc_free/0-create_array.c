#include "main.h"

/**
 * *create_array -  function that creates an array of chars.
 *
 * @size: input.
 * @c: input.
 *
 * Return: Pointer to the array, or NULL or NULL if size = 0
*/

char *create_array(unsigned int size, char c)
{
	int i;
	char *f;

	if (f == 0 || size == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		f[i] = c;

	return (f);
}
