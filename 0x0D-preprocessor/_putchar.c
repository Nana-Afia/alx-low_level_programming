#include <unistd>
#include "main.h"

/**
 * _putchar - print character c to stdout
 * @c: character c to be printed
 *Return: on success 1 else -1
 */

int _putchar(char c)
{
	return(write(1, &c, 1))
}
