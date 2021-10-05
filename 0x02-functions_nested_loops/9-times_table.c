#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 10; j++)
		{

			printf("%3d", i * j);

		}

	printf("\n");

	}

}
