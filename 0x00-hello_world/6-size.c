#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: Using the main function
 * this program print the size of various types in computer
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf(stderr, "Size of a char: %ld byte(s)\n", sizeof(a));
	printf(stderr, "Size of an int: %ld byte(s)\n", sizeof(b));
	printf(stderr, "Size of long int: %ld byte(s)\n", sizeof(c));
	printf(stderr, "Size of long long int: %ld byte(s)\n", sizeof(d));
	printf(stderr, "Size of float: %ld byte(s)\n", sizeof(e));
	return (0);
}
