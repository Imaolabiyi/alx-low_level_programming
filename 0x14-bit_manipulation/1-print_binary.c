#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Unsigned long int number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			putchar('0');
		}

		mask >>= 1;
	}

	putchar('\n');
}

