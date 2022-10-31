#include "main.h"
/**
 * memset - fills the first n bytes of the memory area pointed to by @s with constant byte
 * @s: A pointer to a memory to be filled
 * @c: A character to fill the memory with
 * @n: The number of bytes to be filled
 * Return: a pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		*(s + num) = b;
	}

	return(s)
}
