#include <stdio.h>

/**
 * main - Print alphabet in lower case.
 *  Return: 0 (Success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar((alp[0]) i++);
	}
	putchar('\n');
	return (0);
}
