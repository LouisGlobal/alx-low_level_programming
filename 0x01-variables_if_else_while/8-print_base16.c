#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lower case.
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 16; n++)

	{
		putchar(n);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
