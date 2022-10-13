#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - adds two integers
* @a: first int
* @b: second int
*
* Return: sum of integers
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - subracts two integers
* @a: first int
* @b: second int
*
* Return: the difference of twoo integers
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - multiply two integers
* @a: first int
* @b: second int
*
* Return: the product of two integers
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - devide two integers
* @a: first int
* @b: second int
*
* Return: the quotient of two integers
*/
int op_div(int a, int b)
{
if ( b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
* op_mod - remainder of two integers
* @a: first int
* @b: second int
*
* Return: Remainder of two integers
*/
int op_mod(int a, int b)
{
if ( b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
