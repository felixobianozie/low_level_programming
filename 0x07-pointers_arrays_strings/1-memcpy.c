/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: destination buffer.
 * @src: source buffer.
 * @n: number of bytes to copy from src
 * 
 * Doing it the Felix Obianozie way.
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
