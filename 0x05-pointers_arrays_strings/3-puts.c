#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry point
 * @str: pointer
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i;

	i = 0;
		while (str[i] != '\0')
		{
		_putchar(str[i]);
		i++;
		}
		_putchar('\n');

}
