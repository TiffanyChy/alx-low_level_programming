#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string to be added
 * @src: second string to be added
 * @n: number of bytes from src
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
char *t = dest;

for (; *t != '\0'; t++)
;
for (; *src != '\0'; src++)
{
if (n == 0)
break;
*t = *src;
t++;
n--;
}
return (dest);
}
