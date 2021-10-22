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

	if (argv[0] != 0)
	printf("%d\n", argc - 1);

	return (0);

}
