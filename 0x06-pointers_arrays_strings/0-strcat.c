#include <stdio.h>
#include "main.h"

/**
 * *_strcat - Entry point
 * @src: pointer
 * @dest: pointer
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = i;
	k = 0;
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
