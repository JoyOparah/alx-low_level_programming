#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d, ans1, ans2;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c = 58; c++)
			{
				for (d = 49; d < 58; d++)
				{
					ans1 = (c * 10) + b;
					ans2 = (a * 10) + d;
					if (ans1 < ans2)
					{
						putchar(c);
						putchar(b);
						putchar(' ');
						putchar(a);
						putchar(d);
						if (a == 57 && b == 56 && c == 57 && d == 57)
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
