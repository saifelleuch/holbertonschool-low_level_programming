#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * @c: variable to check
 * Return: 1 if c is lowercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
