#include <unistd.h>
#include "lists.h"

/**
 * _putchar - prints char c to stdout
 * @c: char to be printed
 *
 * Return: On success 1, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
