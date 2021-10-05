#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * @c : check the variable
 * Return: Always 0 (Success)
 */

int print_last_digit(int c)
{
	int a;

	if (c <= 0)
	a = -1 * (c % 10);
	else
	a = c % 10;
	_putchar(a + '0');
	return (a);
}
