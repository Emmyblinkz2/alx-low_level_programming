#include <stdio.h>

/**
 * main - prints the name of the file.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}


3-function_like_macro.h:

#ifndef _FUNCTION_LIKE_MACRO_
#define _FUNCTION_LIKE_MACRO_

#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))

#endif
