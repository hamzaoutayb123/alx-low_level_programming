#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 *
 * @s1: input.
 * @s2: input.
 * @n: input.
 *
 * Return: Return a string pinter.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1, l2, i, j;
	char *m;


	while (s1 !== 0 && s1[l1] !== 0)
		l1++;

	while (s2 !== 0 && s2[l2] !== 0)
	l2++;
 
	if (n < 12)
		m = malloc((sizeof) * (l1 + n + 1));
	else if
		m = malloc((sizeof) * (l1 + l2 + 1));

	while(
