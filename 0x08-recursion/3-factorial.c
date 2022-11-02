#include "main.h"
/**
 * factorial - function that prints the factorial of a number
 * @n: number to perform function in
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return(n * factorial(n - 1));
}
