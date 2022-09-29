#include "main.h"

/**
* _strlen_recursion - print length of a string
* @s: string to be printed
*
* Return: Always 0 (success)
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
_putchar ('\n');
return;
}
_putchar (*s);
s++;
_strlen_recursion(s);
}
