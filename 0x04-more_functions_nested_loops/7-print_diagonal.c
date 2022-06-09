#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of \ to be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		 _putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
}
