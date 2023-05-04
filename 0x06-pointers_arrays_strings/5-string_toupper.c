#include "main.h"

/**
 * string_toupper - convert to uppercase
 * @b: string in lowercase
 * Return: uppercase
 */
char *string_toupper(char *b)
{
int l;

for (l = 0; *(b + l) != '\0'; l++)
{
if (*(b + l) >= 'a' && *(b + l) <= 'z')
*(b + l) -= 32;
}
return (b);
}
