#include <stdio.h>
/**
 * main - prints the alphabets in lowercase
 * Description: using main function
 * this program prints out the aphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
