#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int c = 48;

	while (c <= 57)

	{
		putchar(c);
		c = c + 1;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
