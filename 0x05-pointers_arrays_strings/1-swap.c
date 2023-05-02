#include "main.h"

/**
 * swap_int - swap value of pointers
 * @a: 1st variable to swap
 * @b: 2nd variable to swap
 */
void swap_int(int *a, int *b)
{
int val;
val = *a;
*a = *b;
*b = val;
}
