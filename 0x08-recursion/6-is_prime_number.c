#include "main.h"

/**
 * is_div - check if number can be divided
 * @n: number to be checked
 * @d: the divisor
 * Return: 0 if not prime, 1 if prime
 */
int is_div(int n, int d)
{
if (d > 9)
return (1);
else if (n % d != 0)
return (is_div(n, ++d));
return (0);
}

/**
 * is_prime_number - checks if number is prime number
 * @n: number to be checked
 * Return: 0 if not prime, 1 if prime
 */
int is_prime_number(int n)
{
if (n == 1 || n == -1 || n == 0)
return (0);
return (is_div(n, 2));
}
