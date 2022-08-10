#include "search_algos.h"

/**
 * linear_search - this search is Sequential over the array
 *
 * @array: content the stored data
 * @size: number the elements in array
 * @value: the number found to retrived
 * Return: the number key
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
