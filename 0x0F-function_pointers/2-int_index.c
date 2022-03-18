#include <stddef.h>

/**
 * int_index - this function that searches for an integer.
 * @array: th array
 * @size: size of array
 * @cmp: pointer to compare
 * Return: retrun -1
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* iterate through array and call searching function */
	for (i = 0; i < size; i++)
		if (cmp(*(array + i))) /* if returned true */
			return (i);

	return (-1);

}
