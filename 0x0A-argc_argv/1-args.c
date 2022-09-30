#include "main.h"
#include <stdio.h>

/**
* main - prints number of args
* @argc: argument vector
* @argv: argument vector
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argv - 1);
return (0);
}
