#include "main.h"

/**
 *void print_alphabet_x10(void)- the function print alphabet in lowercase 10 times
 *Return: 0
 */

void print_alphabet_x10(void)
{
char ch;
int counter;

for (counter = 1; counter <= 10; counter++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
