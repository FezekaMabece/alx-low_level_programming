#include "function_pointers.h"
/**
* int_index - function that searches for an integer
* @array: array on numbers
* @size: number of elements in the array
* @cmp: is a pointer to the function to be used to compare values
* 
* Return: -1 o element matches or If size is less or equal 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
}
return (-1);
}
