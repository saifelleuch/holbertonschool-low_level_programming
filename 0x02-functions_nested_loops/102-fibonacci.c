#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int t1 = 1, t2 = 2, i, next;

	printf("%d, ", t1);
	printf("%d, ", t2);
	for (i == 3; i < 50; i++)
	{
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		printf("%d, ", next);
	}
	return (0);
}
