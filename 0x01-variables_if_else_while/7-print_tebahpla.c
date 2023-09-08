#include <stdio.h>

/**
 * main - display alphabet reverse and lowercase
 *
 * Return: return 0 and exit the program
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
