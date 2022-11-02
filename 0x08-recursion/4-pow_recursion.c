#include "main.h"
/**
 * _pow_recursion - function that prints power of integers
 * @x: x ^ y
 * @y: the power number
 * return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
