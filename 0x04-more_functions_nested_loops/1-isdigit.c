#include "main.h"

/**
 * _isdigit -  a function that checks for a digit
 * @c: An input integer
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);

}
