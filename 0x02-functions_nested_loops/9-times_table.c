#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, prod;
	for (i = 0; i<=9; i++ )
	{
		for (j = 0; j<=9; j++)
		{
	
			prod = i*j;
			if(prod <= 9)
			{
				putchar(prod + 48);
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar((prod /10) + 48);
				putchar((prod % 10) + 48);
				putchar(',');
				putchar(' ');
			}

		}
		putchar('\n');
	}
	return (0);
}
