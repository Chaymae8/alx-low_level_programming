#include <stdio.h>
/**
* mybeat - Prints a string before the main function is executed.
*/
void mybeat(void) __attribute__ ((constructor));
void mybeat(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
