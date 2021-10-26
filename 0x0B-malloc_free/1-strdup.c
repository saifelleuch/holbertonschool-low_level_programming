#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - function that create array
 * @str: string
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{

	unsigned int i;
	char *target;

	target = malloc(strlen(str) * sizeof(char));

	if (target == NULL)
		return (NULL);

	i = 0;
	while (i < strlen(str))
	{
		target[i] = str[i];
		i++;
	}

	return (target);

}
