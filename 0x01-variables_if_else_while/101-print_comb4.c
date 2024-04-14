#include <stdio.h>
/**
 * main - print the combination of three digits
 * Description: using the main function
 * print out combination of three digits
 * Return: 0(Success)
 */
int main(void)
{
	int c;
	int middle_digit;
	int first_digit;
	int last_digit;

	for (c = 0; c <= 999; c++)
	{
		first_digit = (c / 100 + '0');
		middle_digit = (c / 10 % 10 + '0');
		last_digit = (c % 10 + '0');
		
		if ((middle_digit < last_digit) && (first_digit < middle_digit))
		{
			putchar(first_digit);
			putchar(middle_digit);
			putchar(last_digit);

			if (c != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
