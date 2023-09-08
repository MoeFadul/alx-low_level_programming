#include <stdio.h>

/**
 * main - Prints the alphabet exept q and e
 * Return: return 0 and exit program
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}

	putchar('\n');
	return (0);
}
