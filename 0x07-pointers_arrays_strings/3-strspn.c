#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that fills memory with a constant byte.
 * @s: first string
 * @accept: second string
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			break;
		}
		if (accept[j] == '\0')
		break;
	}

	return (i);
}
