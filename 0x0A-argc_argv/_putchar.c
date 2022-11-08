#include <unistd>
#include "main.h"
/**
 * _putchar - writes character c to stdout
 * @c: character to be printed
 * Return: On sucess 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
