#include <stdio.h>
/**
 * main - Entry point
 * Description: testing codes
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_twos, second_twos;

	for (first_twos = 0; first_twos <= 98; first_twos++)
	{
		for (second_twos = first_twos + 1; second_twos <= 99; second_twos++)
		{
			putchar(first_twos / 10 + '0');
			putchar(first_twos % 10 + '0');
			putchar(' ');
			putchar(second_twos / 10 + '0');
			putchar(second_twos % 10 + '0');
			if (!(first_twos == 98 && second_twos == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
