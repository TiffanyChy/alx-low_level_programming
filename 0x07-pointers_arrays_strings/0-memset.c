#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: beginning point of string to change
 * @b: value to replace
 * @n: number of bytes to change
 * Return: the pointer that is changed
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ppp = s;

for (; n != 0; ppp++, n--)
*ppp = b;
return (s);
}
