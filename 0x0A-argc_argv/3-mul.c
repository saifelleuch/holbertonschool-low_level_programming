#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i, mult;

	for (i = 1; i < argc - 1; i++)
	{
		mult = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", mult);
	}

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
