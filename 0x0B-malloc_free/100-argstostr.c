#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *argstostr - function that create array
 * @ac: argc
 * @av: argv
 * Return: Always 0 (Success)
 **/


char *argstostr(int ac, char **av)
{

	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);

	return (0);


}
