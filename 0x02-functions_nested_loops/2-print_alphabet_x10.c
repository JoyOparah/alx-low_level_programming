#include <stdio.h>
/**
 * 
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			putchar(b);
		}
		_putchar('\n');

	}
}
