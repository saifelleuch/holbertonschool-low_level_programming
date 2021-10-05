#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry point
 * @c: variable to check
 * Return: 1 if c is lowercase
 */

int _abs(int c)
{
	if (c <= 0)
	c = c * -1;
	return (c);
}
