#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int i, x, sum = 0;
	int j;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	x = 0;
	j = strlen(b) - 1;
	while (j >= 0)
	{
		if (b[j] == '1')
		{
			sum = sum + (1 << x);
		}
		x++;
		j--;
	}

	return (sum);

}
