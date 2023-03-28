#include "main.h"

/**
* _puts - a function that prints a string, followed by a new line, to stdout.
*
* @str: input.
*/

void _puts(char *str)
{
	int c = 0;

	while (str[c] != ('\0'))
	{
		putchar(str[c]);
		c++;
	}
	putchar('\n');
}
