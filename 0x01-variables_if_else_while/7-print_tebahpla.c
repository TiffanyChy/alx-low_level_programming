#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char bc;

for (bc = 'z'; bc >= 'a'; bc--)
{
putchar(bc);
}
putchar('\n');
return (0);
}
