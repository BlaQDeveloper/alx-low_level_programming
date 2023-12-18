#include <stdio.h>
/**
 * main - print out the alphabets except q and e
 * Description: using main function
 * this program prints the alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
