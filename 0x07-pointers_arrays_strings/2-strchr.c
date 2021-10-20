#include <stdio.h>
#include "main.h"

/**
 * *_strchr - function that fills memory with a constant byte.
 * @s: memory area
 * @c: constant byte
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{

	int i;

	i = 0;
	while (s[i] != c)
		i++;


	if (s[i] != c)
		return (NULL);
	else
		return (s + i);
}
