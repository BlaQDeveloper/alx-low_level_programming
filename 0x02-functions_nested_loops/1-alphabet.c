#include "main.h"

/**
 * main - function to print abc
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		print_alphabet(c);
	}
	_putchar('\n');
	return (0);
}
