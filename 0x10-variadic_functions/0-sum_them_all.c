#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that make the sum of all the arguments
 * @n: number of parametres
 * Return: 0 or sum (Success)
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	else
	for (i = 0; i < n; i++)
	{

		sum = sum + va_arg(args, int);

	}

	va_end(args);

	return (sum);


}
