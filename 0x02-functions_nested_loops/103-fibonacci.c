#include <stdio.h>
/**
 * main - main block
 * Decsription: computes and prints even number < 4,000,000
 * 5 below 1024 (excluded), followed by  anew line
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", su,);
	return (0);
}
