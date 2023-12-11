#include "main.h"

/**
 * _isdigit - digit checker (0 to 9)
 * @c: char for check
 *
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
