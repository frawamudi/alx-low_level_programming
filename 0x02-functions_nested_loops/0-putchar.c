#include "main.h"

/**
 *  * main -  prints Holberton, followed by a new line
 *   * Return: Always 0 (Success)
 */

int main(void)
{
	char *my_string = "_putchar";

	while (*my_string != '\0')
	{
		_putchar (*my_string);
		my_string++;
	}

	_putchar ('\n');

	return(0);
}
