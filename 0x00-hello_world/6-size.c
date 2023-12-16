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
	double e;

	printf("Size of a int: %lu byte(s)\n", sizeof(int);
	printf("Size of a char: %lu byte(s)\n", sizeof(char);
	printf("Size of a float: %lu byte(s)\n", sizeof(float);
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int);
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int);
	printf("Size of a double: %lu byte(s)\n", sizeof(double);
	return (0);
}
