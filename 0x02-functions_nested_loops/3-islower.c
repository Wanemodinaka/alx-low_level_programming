#include "main.h"

/**
 * _islowern - Checks for lower character
 * @c: The to be checked
 * Retunr: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
