#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Entry point.
 *
 * @str: input
 *
 * Return: Return 0
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == 0)
		return (NULL);

	while (str[size] != '\0')
		size++;
	m = malloc(sizeof(char) * (size + 1));

	if (m == 0)
		return (NULL);

	for (; i < size; i++)
		m[i] = str[i];
	m[i] = '\0';

	return (m);
}
