#include "main.h"

/**
* _pow_recursion - return value of x raised to the power of y
* @x: base  value to be raised
* @y: value which we raise x by
*
* Return: value of x to the power y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return(x * _pow_recursion(x, y - 1));
}
