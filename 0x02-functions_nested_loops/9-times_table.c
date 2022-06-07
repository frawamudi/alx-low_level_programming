#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, prod;
	for (i = 0; i<=9; i++ )
	{
		for (j = 0; j<=9; j++)
		{
	
			prod = i*j;
			if(prod <= 9)
			{
				_putchar(prod + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((prod /10) + 48);
				_putchar((prod % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
