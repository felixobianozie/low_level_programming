/**
 * _strspn - gets the length of a prefix substring.
 * @s: string with prefix.
 * @accept: string for comparison
 * 
 * Doing it the Felix Obianozie way.
 * Return: number of bytes in the initial segment of s which 
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int slen = 0;
	int alen = 0;
	int count = 0;
	int i;
	int j;
   
	for (i = 0; s[i] != '\0'; i++)
	{
		while (j < 13 && s[i] != spe[j])
		{
			slen++; /*get length of prefix in s*/
			j++;
		}
	}
	i = 0;
	while (accept[i] != '\0')
	{
		alen++; /*get length of accept*/
		i++;
	}
	i = 0;
	j = 0;
	for (j = 0; j < slen; j++)
	{
		for (i = 0; i < alen; i++)
		{
			if (s[j] == accept[i])
				count++; /*count bytes for every match of f in s*/
		}
	}
	return (count);
}
