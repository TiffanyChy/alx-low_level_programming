#include "main.h"

/**
 * *_strcpy - copy the string pointed to by src,inc terminating
 * null byte to the buffer pointed to by dest
 * @dest: char pointer
 * @src: Another char pointer
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
int l, c;
l = 0;

while (src[l] != '\0')
l++;
for (c = 0; c <= l; c++)
dest[c] = src[c];
return (dest);
}
