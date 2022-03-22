#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int myLen = strlen(s);
	int i = (myLen - 1);
	for (i; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
