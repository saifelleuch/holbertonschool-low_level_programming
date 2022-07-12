#include "search_algos.h"
/**
 *binary_search - searches for a value in a sorted array of integers
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 * Return: first index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t m;

	while (i <= size)
	{
		printf("Searching in array: ");
		for (i = size; i < (size - 1) ; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i, ", array[i]);
		m = i + (size - i) / 2;

		if (array[m] == value)
			return (m);

		if (array[m] < value)
			i = m + 1;

		else
			size = m - 1;
	}

	return (-1);
}
