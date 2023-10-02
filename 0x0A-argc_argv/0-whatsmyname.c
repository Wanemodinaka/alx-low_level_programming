#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: numbers of arguments
 * @argv: aray of arguments
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
