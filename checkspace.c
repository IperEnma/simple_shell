/**
 * checkspace - check if the buffer only has spaces
 * @s: buffer
 * Return: 0 only espace or 1 other characters
 */
int checkspace(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != ' ')
			return (1);
	}
	return (0);
}
