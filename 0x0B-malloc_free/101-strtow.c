#include <stdlib.h>
#include "main.h"

void mywstr(char **, char *);
void cmyword(char **, char *, int, int, int);

/**
 * strtow - a function that split a string to words.
 * @str: the string to work on it.
 * Return: a pointer of the splited words.
 */

char **strtow(char *str)
{
	int i, wxwrflag, wlen;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
	{
		return (NULL);
	}


	i = wxwrflag = wlen = 0;

	while (str[i])

	{
		if (wxwrflag == 0 && str[i] != ' ')
			wxwrflag = 1;

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')

		{
			wxwrflag = 0;
			wlen++;
		}

		i++;
	}

	wlen += wxwrflag == 1 ? 1 : 0;

	if (wlen == 0)
	{
		return (NULL);
	}


	words = (char **)malloc(sizeof(char *) * (wlen + 1));

	if (words == NULL)
	{
		return (NULL);
	}

	mywstr(words, str);
	words[wlen] = NULL;
	return (words);
}
