#include <stdio.h>
/**
 * main - Entry point
 * Description: prints out the size of various datatypes
 * Return: 0(Always success)
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(b));
	printf("Size of long int: %ld byte(s)\n", sizeof(c));
	printf("Size of long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of float: %ld byte(s)\n", sizeof(e));
	return (0);
}
