#include "main.h"
/**
 * tokenizador - tokenize and create list
 * @env: line extracted from env
 * @directorys: list dest
 * @delim: delimiter
 * Return: void
 */
void tokenizador(char *env, list_t **directorys, const char *delim)
{
	char *path = NULL;

	path = strtok(env, delim);
	while (path != NULL)
	{
		addnode(directorys, path);
		path = strtok(NULL, delim);
	}
}
