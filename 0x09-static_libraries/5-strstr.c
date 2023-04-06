#include "main.h"

/**
* _strstr - a function that locates a substring.
* @haystack: input
* @needle: input
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *u = haystack;
		char *m = needle;

		while (*u == *m && *m != '\0')
		{
			u++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
