#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (m == NULL || size == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
