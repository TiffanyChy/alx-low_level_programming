#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer that searches for a character
 * @accept: character that has to be located
 * Return: NULL if character is not located
 */
char *_strpbrk(char *s, char *accept)
{
char *str = s - 1;
int u;

do {
str++;
for (u = 0; *(accept + u) != '\0'; u++)
if (*str == *(accept + u))
return (str);
} while (*str != '\0');

return (0);
}
