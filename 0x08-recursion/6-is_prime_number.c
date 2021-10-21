#include <stdio.h>
#include "main.h"

/**
 * check - function that check if n is divisable only by it self
 * @n: int
 * @i: int
 * Return: Always 0 (Success)
 */

int check(int i, int n)
{

	if (n % i == 0 && i < n)
		return (0);

	if (n % i == 0 && i == n)
		return (1);
	return (check(i + 1, n));
}

/**
 * is_prime_number - function that check if n is prime number
 * @n: int
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	return (check(2, n));

}
