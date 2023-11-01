#include "main.h"
#include <stdlib.h>

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
	char *f =  malloc(size);

	if (f == NULL || size == 0)
		return (NULL);

	while (size--)
		f[size] = c;

	return (f);
}
