#include "main.h"
/**
* get_endianness - checks the endianness
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int g;
	char *e;

	g = 1;
	e = (char *) &g;

	return ((int)*e);
}
