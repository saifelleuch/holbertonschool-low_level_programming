#include <stdio.h>
#include "main.h"

/**
 * rev_string - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */


void rev_string(char *s)
{
	int i, j;
	char a, b;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	j = 0;
	while (j < i)
	{
		a = s[j];
		b = s[i];
		s[j] = b;
		s[i] = a;
		i--;
		j++;
	}
}
