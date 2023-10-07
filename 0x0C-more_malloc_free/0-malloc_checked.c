#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 *
 * @b: input.
 *
 * Return: Returns a pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	int *h;

	h = malloc(b);

	if (h == 0)
		exit(98);

	return (h);
}
