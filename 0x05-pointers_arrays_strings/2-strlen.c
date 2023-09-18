#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @d: string
 * Return: Length
 */

int _strlen(char *d)
{
	int longi = 0;

	while (*d != '\0')
	{
		longi++;
		d++;
	}
	return (longi);
}
