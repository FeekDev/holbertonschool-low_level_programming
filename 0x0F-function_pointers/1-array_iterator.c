#include <stddef.h>

/**
 * array_iterator - that executes a function given as a parameter
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 * @array: this is the array
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;/*casteo of data type*/

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));

}
