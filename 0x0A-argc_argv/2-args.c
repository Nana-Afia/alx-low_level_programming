#include <stdio.h>
#include "main.h"

/**
 * main - print name of function
 * @argc: count argument
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
