#include "main.h"
/**
 * tokenizador - tokenize and create list
 *
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
