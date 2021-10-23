#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{

	int i, j, sum;

	if (argc < 2)
		printf("0\n");

	else
	{
	for (i = 1; i < argc - 1; i++)
	{
		for (j = 0; j < i; j++)
		{
		if (isdigit(argv[i][j]))
		{
			sum = atoi(argv[i]) + atoi(argv[i + 1]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		}

	}
	printf("%d\n", sum);
	}

	return (0);

}
