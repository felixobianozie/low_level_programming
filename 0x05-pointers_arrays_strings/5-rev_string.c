#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	char myCh;
	int i = strlen(s);
	int j = 0;

	for(j; j < i; j++)
	{
		i--;
		myCh = s[j];
		s[j] = s[i];
		s[i] = myCh;
	}
}
