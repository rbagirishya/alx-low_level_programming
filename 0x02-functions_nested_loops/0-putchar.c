#include "stdio.h"

/**
 * main.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {100, 111, 112, 88, 102, 124, 143, 134, 123};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
