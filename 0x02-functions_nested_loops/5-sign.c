#include "main.h"

/**
 * print_sign - check input if its positive, negative or zero
 * @n: variable to determine if input is >,< or = 0
 * Return: 1 & print + if n is > 0,0 and print 0 if n = 0,-1 otherwise
 */

int print_sign(int n)
{
int i;
if (n > 0)
{
_putchar('+');
i = 1;
}
else if (n < 0)
{
_putchar('-');
i = -1;
}
else
{
_putchar('0');
i = 0;
}
return (i);
}
