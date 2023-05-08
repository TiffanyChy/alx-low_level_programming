#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: beginning of string to change
 * @src: value to replace
 * @n: number of bytes to change
 * Return: pointer that has been changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dst = dest;
char *sc = src;

for (; n != 0; dst++, n--, sc++)
*dst = *sc;
return (dest);
}
