#include "main.h"

/**
 * print_alphabet -  a function that prints the alphabet, in lowercase
 * followed by a new line
 * Return: Nothing
 */
void print_alphabet(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
	_putchar(low);
	_putchar('\n');
}
