#include <stdio.h>
#include "main.h"

/**
 * main - print name of the program
 * @argc: counts argument
 * @argv:Arguments
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%i\n", argc - 1);

	return (0);
}
