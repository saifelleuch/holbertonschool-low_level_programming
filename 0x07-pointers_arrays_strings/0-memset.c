#include <stdio.h>
#include "main.h"

/**
 * *_strcat - Entry point
 * @s: memory area
 * @b: constant byte
 * @n: the first n bytes
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);

}
