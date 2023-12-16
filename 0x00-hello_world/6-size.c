#include <stdio.h>
/**
 * main - prints the size of data types
 * Description: using the main function
 * this program prints the size of various datatypes
 * Return: 0
 */
int main(void)
{
	int i;
	char a;
	float b;
	long int c;
	long long int d;

	printf("Size of a int: %ld byte(s)\n", sizeof(i));
	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of a float: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
	return (0);
}
