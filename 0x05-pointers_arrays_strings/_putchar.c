#include <stdio.h>


/**
  * _putchat - writes charater c to stdout
  * @c: char to be printed
  * Return: on success 1
  */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
