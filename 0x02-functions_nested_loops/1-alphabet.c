#include "main.h"

/**
 * print_alphabet - function that prints abc
 * Description: print the alphabet in lowercase.
 * this print alphabets
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
