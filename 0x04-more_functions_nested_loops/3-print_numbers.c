#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print number from 0 to 9
 * return: 0 Always
 */

void print_numbers(void)

{
	char c;

		for (c = '0'; c <= '9'; c++)
		{
			putchar(c);
		}

	putchar('\n');
}

