#include <stdio.h>
/**
 * main - Using the main function
 * Description: prints all base 16 numbers in lowercase,
 * followed a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
