#include "function_pointer.h"

/**
* array_iterator - executes a function given as a parameter
* @array: value
* @size: funtion
* @action: function
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
