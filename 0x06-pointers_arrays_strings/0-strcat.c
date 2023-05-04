#include "main.h"

/**
 * _strcat - concantenates two strings
 * @dest: first string to be added
 * @src: second string to be added
 * Return: concantenated string
 */
char *_strcat(char *dest, char *src)
{
char *t = dest;

for (; *t != '\0'; t++)
;
for (; *src != '\0'; src++)
{
*t = *src;
t++;
}
*t = *src;
return (dest);
}
