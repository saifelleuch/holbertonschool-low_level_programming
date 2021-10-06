#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n : check variable
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}

	}

	printf("%d\n", n);
}
