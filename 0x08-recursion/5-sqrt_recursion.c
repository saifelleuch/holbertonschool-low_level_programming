#include <stdio.h>
#include "main.h"

/**
 * _sqrt - function that will get the square root
 * @i: int
 * @n: int
 * Return: Always 0 (Success)
 */

int _sqrt(int i, int n)
{

	if (i * i == n)
		return (i);

	if (i * i <= n)
		return (_sqrt(i + 1, n));
	else
		return (-1);

}

/**
 * _sqrt_recursion - function that check if n have a quare root
 * @n: int
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{

	if (n == 0 || n == 1)
		return (n);

	if (n < 0)
		return (-1);

	return (_sqrt(2, n));

}

