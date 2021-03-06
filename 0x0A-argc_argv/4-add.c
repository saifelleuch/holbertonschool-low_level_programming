#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - function
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{

	int i, sum = 0;
	unsigned int j;

	if (argc < 2)
		printf("0\n");

	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
		if (isdigit(argv[i][j]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	}

	return (0);

}
