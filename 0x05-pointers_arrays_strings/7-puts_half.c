#include <stdio.h>
#include "main.h"

/**
 * puts_half - Entry point
 * @str: pointer
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i, j, n;

	j = 0;
	while (str[j] != '\0')
	j++;

	if (j % 2 == 0)
	{
		i = j / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (j + 1) / 2;
		n = (j - 1) / 2;
		while (str[i] != '\0')
		{
		_putchar(str[i]);
		i++;
		}
		_putchar(str[n]);
	}
	_putchar('\n');
}
