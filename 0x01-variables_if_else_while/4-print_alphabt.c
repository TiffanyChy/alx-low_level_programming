#include <stdio.h>
/**
 * main - Print all the alphabet letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char bc;

for (bc = 'a'; bc <= 'z'; bc++)
{
if (bc == 'q' || bc == 'e')
{
continue;
}
putchar(bc);
}
putchar('\n');
return (0);
}
