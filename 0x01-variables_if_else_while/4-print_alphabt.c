#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int e;

	for (e = 0; e < 24; e++)
	{
		putchar(alp[e]);
	}
	putchar('\n');
	return (0);
}
