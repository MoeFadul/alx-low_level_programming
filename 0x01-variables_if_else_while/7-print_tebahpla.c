#include <stdio.h>

/**
 * main - display alphabet lowercase reverse
 *
 * Return: return 0 and exit program
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
