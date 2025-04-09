#include <stdio.h>
/**
 * main - program that prints the alphabet
 * Description: prints the alphabet in lowercase and
 * then in uppercase followed a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char upper_alphabet;
	char lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
	{
		putchar(lower_alphabet);
	}
	for (upper_alphabet = 'A'; upper_alphabet <= 'Z'; upper_alphabet++)
	{
		putchar(upper_alphabet);
	}
	putchar('\n');
	return (0);
}
