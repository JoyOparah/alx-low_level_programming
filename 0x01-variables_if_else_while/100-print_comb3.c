#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, k;

	for (j = 48; j < 58; j++)
	{
		for (k = 49; k < 58; k++)
		{
			if (j != k && j < k)
			{
				putchar(j);
				putchar(k);
				if (j == 56 && k == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
