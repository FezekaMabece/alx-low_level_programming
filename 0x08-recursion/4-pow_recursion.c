#include "main.h"

/**
* _pow_recursion - return x to the power y
* @x: base number to raised to the power of
* @y: number used to raise power of x
*
* Return: the value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y > 0)
return (1);
return (_pow_recursion (x**y));
}
