#include "variadic_functions.h"
/**
* sum_them_all -the sum of all its parameters.
* @n: param
*
* Return: 0 if n equal 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
int sum = 0;
if (n != 0)
{
va_start(args, n);
while (i < n)
{
sum += va_args(args, int);
i++;
}
va_end(args);
return (sum);
}
return (0);
}
