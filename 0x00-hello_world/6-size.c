#include <stdio.h>
/**
  *Description: main - Prints out the size of various types on the computer.
  *it is compiled on.
  *Return: 0 if successful.
  */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;
	printf("Size of a char: 1 byte(s)\n", sizeof(c));
	printf("Size of a int: 4 byte(s)\n", sizeof(i));
	printf("Size of a long int: 8 byte(s)\n", sizeof(l));
	printf("Size of a long long int: 8 byte(S)\n", sizeof(ll));
	printf("Size of a float: 4 byte(s)\n", sizeof(f));
	return (0);
}
