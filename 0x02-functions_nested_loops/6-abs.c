#include "main.h"
/**
 * main - a function that computes the absolute value of an integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
