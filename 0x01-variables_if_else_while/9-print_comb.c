#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int c = 0;

	while (c < 10)

	{
		putchar(c);
		c = c + 1;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
