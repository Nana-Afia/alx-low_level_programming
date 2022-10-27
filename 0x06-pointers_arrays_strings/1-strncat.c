#include "main"

/**
 * _strncat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
