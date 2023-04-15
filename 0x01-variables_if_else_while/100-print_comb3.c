#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits a1,b2,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a1, b2;

	for (a1 = 0; a1 < 9; a1++)
	{
		for (b2 = a1 + 1; b2 < 10; b2++)
		{
			putchar((a1 % 10) + '0');
			putchar((b2 % 10) + '0');

			if (a1 == 8 && b2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
