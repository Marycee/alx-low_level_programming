#include <stdio.h>

/**
 * main -  prints the alphabets in lowercase, letters except q and e
 * Return: 0
 */
init main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
