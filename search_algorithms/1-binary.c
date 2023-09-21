#include "search_algos.h"

/**
 *binary_search - Function that searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: is the value to search for
 *Return: the index where value is located, or -1 if the value is not
 *present in the array or if the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t origin = 0, end = size - 1;
	size_t middle, i;

	if (!array)
	{
		return (-1);
	}
	do {
		printf("Searching in array: ");
		for (i = origin; i <= end; i++)
		{
			printf("%d", array[i]);
			printf(i < end ? ", " : "\n");
		}
		middle = (origin + end) / 2;
		if (array[middle] < value)
		{
			origin = middle + 1;
		}
		else if (array[middle] > value)
		{
			end = middle - 1;
		}
		else
			return (middle);
	} while (origin <= end);
	return (-1);
}
