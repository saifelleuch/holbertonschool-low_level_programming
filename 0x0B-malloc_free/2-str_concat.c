#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - function that create array
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{

	char *target;
	unsigned int i, j;

	target = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (target == NULL)
		return (NULL);

	i = 0;
	while (i < strlen(s1))
	{
		target[i] = s1[i];
		i++;
	}

	i = 0;
	j = strlen(target);
	while (i < strlen(s2))
		{

		target[j] = s2[i];
		j++;
		i++;

		}

	return (target);

}
