#include <stdio.h>
/**
 * main - prints all possible different combintation of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 0; n < 5; n++)
	{
		for (m = 1; m < 5; m++)
		{
			for (l = 2; l < 5; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 3 || m != 5)
					{
						putchar (',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
