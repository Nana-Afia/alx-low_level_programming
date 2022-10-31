#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory from src to dest
 * @src: copied from
 * @dest: copied to
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int n;
	char dest;
	char src;

	for (i = 0; i < n; i++)
		memcpy(dest, src, n);
	return (dest);
}
