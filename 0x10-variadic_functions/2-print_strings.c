#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function that print all the arguments
 * @separator: string to separate the argument printed
 * @n: number of parametres
 * Return: 0 or sum (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *value;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return; }
	for (i = 0; i < n - 1; i++)
	{
		value = va_arg(args, char*);
		if (separator != NULL)
			if (value == NULL)
			{
				printf("(nil)%s", separator);
				continue; }
			else
				printf("%s%s", value, separator);
		else
			if (value == NULL)
			{
				printf("(nil)");
				continue; }
			else
			printf("%s", value); }
	for (; i < n; i++)
	{
		value = va_arg(args, char*);
		if (value == NULL)
			printf("(nil)");
		else
			printf("%s", value); }
	va_end(args);
	printf("\n");
}
