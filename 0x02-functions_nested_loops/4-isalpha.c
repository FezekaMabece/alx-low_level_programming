#include "main.h"
/**
 * mai - a function that checks for alphabetic character
 *
 * Return: ALways 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return(1);
	}
	else
	return(0);
}

