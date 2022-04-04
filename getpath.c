#include <main.h>
/**
 * getpath - get path from environ
 * Return: environ
 */
char *getpath()
{
	extern char **environ;
	char *pathcompare = "PATH";
	int i = 0, j = 0;

	for (i = 0; environ[i]; i++)
	{
		for (j = 0; pathcompare[j]; j++)
		{
			if (*(environ[i]) == pathcompare[j])
			{
				*(environ[i]++);
			}
			else
				break;
		}
		if (j == 4)
		{
			*(environ[i]++);
			break;
		}
	}
	return (environ[i]);
}
