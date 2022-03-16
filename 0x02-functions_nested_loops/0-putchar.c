#include <stdio.h>

/**
* main - prints a string "_putchar" string of characters"
*
* Return: 0
*/

int main()
{
	char myText[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		putchar(myText[i]);
	}
	putchar('\n');
}
