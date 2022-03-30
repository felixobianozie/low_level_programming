/**
 * _strchr - Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found.
 * @s: string to be searched
 * @c: character to match
 * 
 * Doing it the Felix Obianozie way.
 * Return: pointer to the first occurence of c OR NULL if no match is found.
 */
char *_strchr(char *s, char c)
{
	int slen = 0;
	int i = 0;
	while (s[slen] != '\0')
	{
		slen++;
	}
	while (i < slen)
	{
		if (s[i] == c)
		{
			return ((s+i));
			break;
		} else if (i == (slen - 1))
		{
		return (NULL);
		}
	i++;
	}
}
