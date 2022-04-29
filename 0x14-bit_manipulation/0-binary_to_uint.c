#include "main.h"
int _pow(int a, int b);

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: char pointer parameter holding binary string
 *
 * Return: mydec (decimal/int value of binary).
 * if parameter b is null or not binary, return 0
 */

unsigned int binary_to_uint(const char *b)
{
	int size = 0;
	int placev;
	int i = 0;
	int mydec = 0;

	/*
	 *determing the size of string
	 */

	while (b[i])
	{
		size++;
		i++;
	}
	placev = size - 1;
	if (!b)
		return (0);
	if (b)
	{
		i = 0;
		while (b[i])
		{
			if (b[i] == '0' || b[i] == '1')
			{
				mydec = mydec + ((b[i] - '0') * _pow(2, placev));
				placev--;
			} else
			{
				return (0);
			}
			i++;
		}
	}
	return (mydec);
}

/**
 * _pow - calculates a to power b (a^b)
 * @a: base parameter
 * @b: power parameter
 *
 * Return: value of a^b
 */

int _pow(int a, int b)
{
	int val = 1;

	while (b)
	{
		val = val * a;
		b--;
	}
	return (val);
}
