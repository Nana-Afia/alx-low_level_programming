#include <unistd>
#include "main.h"
/**
 * _putchar - writes the character char to stdout
 * @c: the character to prit
 * Return: On success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
