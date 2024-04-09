#include <stdio.h>
/**
 * main - print two digits combination
 * Description: using the main function
 * prints all possible different two digits combination
 * Return: 0(Sucesss)
 */
int main(void)
{
	int c;
	int first_digit;
	int last_digit;

	for (c = 0; c <= 99; c++)
	{
		first_digit = (c / 10 + '0');
		last_digit = (c % 10 + '0');

		if (first_digit < last_digit)
		{
			putchar(first_digit);
			putchar(last_digit);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
