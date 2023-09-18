#inlude "main.h"

/**
 *swap_int - a function that swaps the values of two integers.
 *
 * @a: pointer type int
 * @b: pointer type int
*/

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
