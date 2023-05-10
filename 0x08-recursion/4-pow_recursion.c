#include "main.h"

/**
 * _pow_recursion - get x to the power of y
 * @x: integer
 * @y: integer
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
int eff = x;

if (y < 0)
return (-1);

else if (y == 0)
return (1);

eff *= _pow_recursion(x, y - 1);

return (eff);
}
