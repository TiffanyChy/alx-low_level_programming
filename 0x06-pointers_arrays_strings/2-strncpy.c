#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: first string to be added
 * @src: second string to be added
 * @n: number of bytes from src
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
char *t = dest;

for (; n != 0 && *src != '\0'; n--, src++)
{
*t = *src;
t++;
}
for (; n != 0 && *t != '\0'; n--, t++)
*t = '\0';
return (dest);
}
