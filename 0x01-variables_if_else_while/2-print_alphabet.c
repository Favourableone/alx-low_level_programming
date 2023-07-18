#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints alphabets in lower case a-z
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
