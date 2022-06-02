#include <stdio.h>

/**
 * main - Print a string
 * Description: print a string without using puts() and printf()
 * Return: 1
 */

int main(void)
{
char *my_string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fprintf(stdout,"%s", my_string);
return (1);
}

