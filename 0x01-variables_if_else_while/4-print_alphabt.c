#include <stdio.h>

/**
 * main -  prints the alphabets in lowercase, letters except q and e
 * Return: 0
 */
init main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
