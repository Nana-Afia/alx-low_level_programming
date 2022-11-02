#include "main.h"

/**
 * _strleng_recursion - function that prints the length of a string
 * @s: string to be printed
 * Return: length of the string
 */
int _strleng_recursion(char *s)
{
	int n;


	if (*s == '\0')
		return (0);
	s++;
	return(1 + _strlen_recursion(s));
}
