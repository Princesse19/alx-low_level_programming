#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int u = '0';
	int d = '0';
	int c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			for (u = '0'; u <= '9'; u++)
			{
				if (!((u == d) || (d == c) || (d > u) || (c > d)))
				{
					putchar(c);
					putchar(d);
					putchar(u);
					if (!(u == '9' && c == '7' && d == '8'))
					{
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
