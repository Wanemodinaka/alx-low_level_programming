#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: the main string to search within
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *substr;
	char *search;
	
	while (*haystack)
	{
		substr = haystack;
		search = needle;
		while (*haystack && *search && *haystack == *search)
		{
			haystack++;
			search++;
		}
		if (!*search)
			return (substr);
		haystack = substr + 1;
	}
	return (NULL);
}
