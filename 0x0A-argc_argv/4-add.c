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
int a, b, suma = 0;

for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] < 48 || argv[a][b] > 57)
{
printf("Error\n");
return (1);
}
}
suma += atoi(argv[a]);
}
printf("%i\n", suma);
return (0);
}
