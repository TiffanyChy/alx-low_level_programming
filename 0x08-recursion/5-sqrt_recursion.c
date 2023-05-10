#include "main.h"

/**
 * expo - facilitates sqrt in finding sqrt
 * @n: sqrt
 * @r: sqrt of n
 * Return: natural sqrt of n
 */
int expo(int n, int r)
{
if (r * r  == n)
return (r);
else if (r * r < n)
return (expo(n, ++r));
return (-1);
}

/**
 * _sqrt_recursion - get the natural sqrt of n
 * @n: integer
 * Return: natural sqrt of n
 */
int _sqrt_recursion(int n)
{
return (expo(n, 0));
}
