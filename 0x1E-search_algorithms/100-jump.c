#include "search_algos.h"

/**
 * jump_search - is an search in block
 *
 * @array: content the main array
 * @size: size of the array
 * @value: value to found
 * Return: return 1 if is found or -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = sqrt((int)size);
	int i = 0;

	if (array == NULL)
		return (-1);

	while (array[end] <= value && end < (int)size)
	{
		start = end;
		end += sqrt(size);
		if (end > (int)size - 1)
		{
			end = (int)size;
		}
	}

	for (i = start; i < end; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
