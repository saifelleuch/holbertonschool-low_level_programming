#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - Entry point
 * @src: pointer
 * @dest: pointer
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
