#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int array to reverse
 * @n: number of elements in an array
 * Return: concatenated string
 */
void reverse_array(int *a, int n)
{
int *start = a;
int *stop;
int pause = 0;

stop = a + n - 1;
for (; start < stop; start++, stop--)
{
pause = *stop;
*stop = *start;
*start = pause;
}
}
