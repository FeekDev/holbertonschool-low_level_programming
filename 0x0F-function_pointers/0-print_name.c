#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this is the function pointers
 * @name: the name topic
 * @f: the pointer to function
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
