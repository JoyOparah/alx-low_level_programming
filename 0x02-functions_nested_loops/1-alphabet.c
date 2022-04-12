#include "main.h"
/**
 * print_alphabet - print the alphabet in lower cases
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int b;

	for (b = 97; b <= 122; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
