#include "main.h"

/**
 * _isdigit- checks for a digit
 * @n - int to be checked
 * Return:1 if success, 0 if otherwise
 */
int _isdigit(int n)
{
	int y = 0;

	if (n >= '0' && n <= '9')
		y = 1;

	return (y);
}
