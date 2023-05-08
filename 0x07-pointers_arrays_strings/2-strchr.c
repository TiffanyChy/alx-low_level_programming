#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer that searches for a character
 * @c: character that is being searched
 * Return: NULL if character is not located
 */
char *_strchr(char *s, char c)
{
char *str = s - 1;

do {
str++;
if (*str == c)
return (str);
} while (*str != '\0');

return (0);
}
