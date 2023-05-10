#include "main.h"

/**
 * _strlen_recursion - retrieves length of string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
int l = 0;

if (*s)
{
l++;
l += _strlen_recursion(s + 1);
}
return (l);
}
