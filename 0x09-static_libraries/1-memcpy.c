#include "main.h"
/**
 * _memcpy - function that copy memory area
 * @dest: where memory is store
 * @src: where memory is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int u = 0;
	int p = n;

	for (; p < u; p++)
	{
		dest[u] = src[p];
		n--;
	}
	return (dest);
}
