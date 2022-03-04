#include <stdio.h>

/**
 * main - this is the topic main
 * @argc: the  counter
 * @argv: the array
 * Return: this return 0
 **/

int main(int argc, char *argv[])
{

int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
