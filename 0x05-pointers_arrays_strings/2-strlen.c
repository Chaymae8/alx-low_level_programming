#include "main.h"

/**
* _strlen - a function that returns the length of a string.
*
* @s: input.
*
* Return: c.
*/

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
