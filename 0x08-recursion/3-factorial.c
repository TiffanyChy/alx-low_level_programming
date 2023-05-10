#include "main.h"

/**
 * factorial - the factorial of a given number
 * @n: number to get factorial
 * Return: factorial
 */
int factorial(int n)
{
int eff = n;

if (n < 0)
return (-1);

else if (n >= 0 && n <= 1)
return (1);

eff *= factorial(n - 1);

return (eff);
}
