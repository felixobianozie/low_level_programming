#include <stdio.h>
void my_print(int a, int h, int b, int d);

/**
* main - main function
*
* Description: Print all possible combinations of two two-digit numbers.
* Numbers should range from 0 to 99.
* The two numbers should be separated by a space.
* All numbers should be printed with two digits. 1 should be printed as 01.
* Combination of numbers must be separated by a comma followed by a space.
* Combinations of numbers should be printed in ascending order.
* `00 01` and `01 00` are considered as the same combination.
* You can only use `putchar` to print to console.
* You can only use `putchar` up to 8 times.  You are not allowed to use any
* variable of type `char`.
* We did it here in the Felix Obianozie way.
* Section 1: program entry point.
* Return: 0
*/

int main(void)
{
	int a, c, e, g;
	int b = '0';
	int d = '0';
	int f = '0';
	int h = '0';

	for (a = 0; a <= 9; a++)
	{
		d = '0';
		for (c = 0; c <= 9; c++)
		{
			f = '0';
			for (e = 0; e <= 9; e++)
			{
				h = '0';
				for (g = 0; g <= 9; g++)
				{
					my_print(f, h, b, d);
					h++;
				}
				f++;
			}
			d++;
		}
		b++;
	}
	return (0);
}

/**
* my_print - prints to stdout
* @f: defines third character
* @h: defines fourth character
* @b: defines first character
* @d: defines second character
*
* Description: renders output to stdout based on certain conditions
* Section 2: renders service to the main function
*/

void my_print(int f, int h, int b, int d)
	{
		if ((f + h) > (b + d))
		{
			putchar(b);
			putchar(d);
			putchar(' ');
			putchar(f);
			putchar(h);
			if (b == '9' && d == '8' && f == '9' && h == '9')
			{
				putchar('\n');
			} else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

