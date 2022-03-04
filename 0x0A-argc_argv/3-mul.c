#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the topic main
 * @argc: the  counter
 * @argv: the array
 * Return: this return 0
 **/

int main(int argc, char *argv[])
{

int a, b;
int mult;

		if (argc == 3)
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mult = a * b;
		printf("%d\n", mult);

		if (argc < 0)
			printf("Error\n");

	return (0);
}
