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

	printf("Size of a int: %d\n byte(s)", sizeof(int(i)));
	printf("Size of a char: %d\n byte(s)", sizeof(char(a)));
	printf("Size of a float: %d\n byte(s)", sizeof(float(b)));
	printf("Size of a long int: %d\n byte(s)", sizeof(long int(c)));
	printf("Size of a long long int: %d\n byte(s)", sizeof(long long int(d)));
	printf("Size of a double: %d\n byte(s)", sizeof(double(e)));
	return (0);
}
