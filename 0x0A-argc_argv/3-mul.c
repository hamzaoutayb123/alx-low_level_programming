#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: int
 * @argv: pointer to an array of command line arguments.
 *
 * Return: Return (0) success , if it didnt it fails.
*/

int main(int argc, char *argv[])
{
	int darb;

	if (argc == 3)
	{
		darb = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", darb);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

