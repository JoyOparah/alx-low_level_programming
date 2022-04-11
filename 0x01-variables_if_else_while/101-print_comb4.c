#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, k, l;

	for (j = 48; j < 58; j++)
	{
		for (k = 49; k < 58; k++)
		{
			for (l = 50; l < 58; l++)
			{
				if (j != k && k != l && l != j && j < k && k < l)
				{
					putchar(j);
					putchar(k);
					putchar(l);
					if (j == 55 && k == 56 && l == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
