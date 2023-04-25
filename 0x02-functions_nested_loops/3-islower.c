#include "main.h"

/**
 * _islower - checks if input is lowercase
 * @c: variable to determine if input is lowercase
 * main - uses built in function
 * Return: 1 if c is lowercase  0 otherwise
 */

int _islower(int c)
{
int i;
i = 0;
if (c >= 'a' && c <= 'z')
{
i = 1;
}
return (i);
}
