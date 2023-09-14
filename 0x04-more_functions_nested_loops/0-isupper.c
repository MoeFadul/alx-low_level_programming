/**
 * _isupper - uppercase char check
 * @c: char for check
 *
 * Return: 1 if c is uppercase and return 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
