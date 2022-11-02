#include "main.h"

/**
 * _sqrt_recursion - function that returns natural square of a num
 * @n: paramter to squared
 * Return: square of the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator
 * Return: number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	       return ( -1 );
	if (square == n)
		return (i);
	return (_sqrt(n , i + 1));
}	
