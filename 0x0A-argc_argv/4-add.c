#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{

	int i, sum;

	for (i = 1; i < argc - 1; i++)
	{
		if ( argv[i] is not digit)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = atoi(argv[i]) + atoi(argv[i + 1]);
			printf("%d\n", sum);
		}
	
	}

	if (argc < 2)
		printf("0\n");

	return (0);

}
