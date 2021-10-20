#include <stdio.h>
#include "main.h"

/**
 * factorial - function that get factorial
 * @n: get factorial of n
 * Return: Always 0 (Success)
 */

int factorial(int n)
{

	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));

}
