#include "lists.h"
#include <stdio.h>

/**
 * _putchar - print the char c to stdout
 * @c: char c to be printed
 *
 * Return: On success 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
