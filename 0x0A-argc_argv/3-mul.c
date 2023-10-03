#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiples two number
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
