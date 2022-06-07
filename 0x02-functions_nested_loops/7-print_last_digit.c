#include "main.h"

/**
 * _abs - returns absolute value of n
 * @n: integer to be tested
 * Return: abs(n)
 */
int _abs(int n)
{
	return (n < 0 ? -1 * n : n);
}


/**
 * print_last_digit - pritns the last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: lastdigit of n
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs((n % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}
