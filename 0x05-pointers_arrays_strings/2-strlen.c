#include "main.h"
/**
*a function that returns the length of a string.
*
*/
int _strlen(char *s)
{
char *str;
int len;
str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}
