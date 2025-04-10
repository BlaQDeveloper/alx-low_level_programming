#include <stdio.h>
/**
 * main - Using the main function
 * Description: prints the alphabets in lowercase in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
