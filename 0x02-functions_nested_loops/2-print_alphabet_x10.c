#include <stdio.h>
/**
 * 
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int b, c;

	for (b = 0; b < 10; b++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');

	}
}
