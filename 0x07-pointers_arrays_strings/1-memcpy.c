#include "main.h"
/**
 * _memcpy - a function that copies memory area
 *  @dest: where memory will be stored
 *  @src: where membory will be copied from
 *  @n: number of bytes
 *
 *  Return: Pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
