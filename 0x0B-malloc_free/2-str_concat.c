#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 *
 * @s1: input.
 * @s2: input.
 *
 * Return: Always return 0
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l1 = 0, l2 = 0;
	char *m;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	m = malloc(sizeof(char) * (l1 + l2 + 1));

	if (m == 0)
		return (NULL);
	while (i < l1)
	{
		m[i] = s1[i];
		i++;
	}
	for (; j < l2; j++, i++)
		m[i] = s2[j];
	m[i] = '\0';

	return (m);
}
