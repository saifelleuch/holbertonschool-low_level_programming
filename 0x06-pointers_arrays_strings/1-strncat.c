#include <stdio.h>
#include "main.h"

/**
 * *_strncat - Entry point
 * @src: pointer
 * @dest: pointer
 * @n: pointer
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[i] = src[k];
	i++;
	k++;
	}
	dest[i] = '\0';
	return (dest);
}
