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
	size_t l = 0;
	size_t r = size - 1;
	size_t mid, i;

	if (array == NULL)
	{
		return (-1);
	}
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r ; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[r]);
		mid = (l + r) / 2;
		if (array[mid] < value)
		{
			l = mid + 1;
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
