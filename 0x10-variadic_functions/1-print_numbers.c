#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that print make all the arguments
 * @separator: string to separate the argument printed
 * @n: number of parametres
 * Return: 0 or sum (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list(args);
	unsigned int i;
	int value;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n - 1; i++)
	{

		value = va_arg(args, int);
		if (separator != NULL)
		{
			printf("%d%s", value, separator);
		}
		else
			printf("%d,", value);

	}
	for (; i < n; i++)
	{

		value = va_arg(args, int);
		if (separator != NULL)
		{
			printf("%d", value);
		}
		else
			printf("%d,", value);

	}
	va_end(args);
	printf("\n");

}
