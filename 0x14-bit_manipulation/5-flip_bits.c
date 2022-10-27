#include <stdlib.h>
#include "main.h"

/**
* flip_bits - function that returns the number of bits you would need to flip
* @n: integer
* @m: integer
*
* Return: the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int mask = 0, count = 0;
mask = n ^ m;
while (mask)
{
if (mask & 1)
count++;
mask >>= 1;
}
return (count);
}
