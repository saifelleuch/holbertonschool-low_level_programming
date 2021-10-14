#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: pointer
 * @s2: pointer
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i, k;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		k = s1[i] - s2[i];
		i++;
		if (k < 0 || k > 0)
			break;
	}
	return (k);

}
