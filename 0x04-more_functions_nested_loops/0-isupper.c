#include "main.h"
#include <stdio.h>

/**
	* main - check the code.
	* Return: 1 if c is uppercase otherwise return 0.
	*/

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	return (1);

	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);

}