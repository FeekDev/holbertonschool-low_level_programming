#include "main.h"

/**
 *_abs -  that computes the absolute value of an integer
 *@n: - integer the number
 *Return: 0
 **/

int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else if (n > 0)
{
return (n);
}
return (0);
}

