#include <stdio.h>
/**
 * main - print the alphabets in reverse
 * Description: using the main function
 * Print the alphabets in reverse
 * Return: 0(Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
