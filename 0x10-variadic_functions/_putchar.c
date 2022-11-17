#include <unistd.h>
#include "variadic_functions.h"

/**
 * _putchar - writes the character c to be printed to stdout
 *@c: charcter c to be printed
 *Return: On sunccess  else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
