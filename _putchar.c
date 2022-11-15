#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to be printed
 * @c: character c to be printed
 * Return: On success 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
