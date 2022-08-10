#include "search_algos.h"

/**
 * binary_search - this search is secuential
 *
 * @array: list of number sorted
 * @size: lenght of array
 * @value: the key to found
 * Return: the mind if is founding or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int i, low, high;

	low = 0;
	high = (int)size - 1;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);

		else if (value < array[mid])
			high = mid - 1;

		else if (value > array[mid])
			low = mid + 1;
	}
	return (-1);
}
