#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int e;

	for (e = 0; e < 26; e++)
	{
		putchar(alp[e]);
	}
	putchar('\n');
	return (0);
}
