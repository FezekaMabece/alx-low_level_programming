#include "function_pointer.h"
#include <stdio.h>
/**
* array_iterator - executes a function given as a parameter
* @array: value
* @size: funtion
* @action: function
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned in i = 0;
if (array != NULL && size > 0 && action != NULL)
{
while (i < size)
{
action(array[i]);
}
}
}
