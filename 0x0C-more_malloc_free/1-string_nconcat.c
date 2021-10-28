#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *string_nconcat - function that create array
 * @s1: string 1
 * @s2: string 2
 * @n: n first bytes
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *target;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	target = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (target == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		target[i] = s1[i];
	}

	if (n >= strlen(s2))
		n = strlen(s2);

	for (j = 0; j < n; j++)
	{
		target[i] = s2[j];
		i++;
	}

	return (target);

}
