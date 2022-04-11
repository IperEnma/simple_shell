#include "main.h"
/**
 * dirs - save directories in lists
 * @directorys: save path
 * @pwd: save pwd
 * @old_pwd: save oldpwd
 * Return: void
 */
void dirs(list_t **directorys, list_t **pwd, list_t **old_pwd)
{
	int  i = 0;
	char *path = NULL, *pwd_s = NULL, *old_pwd_s = NULL;
	char *token_path = NULL;

	old_pwd_s = getoldpwd();
	if (strcmp(old_pwd_s, "ERROR") != 0)
	{
		token_path = strtok(old_pwd_s, "=");
		for (i = 0; token_path != NULL; i++)
		{
			if (i != 0)
				addnode(old_pwd, token_path);
			token_path = strtok(NULL, "="); } }
	path = getpath();
	if (strcmp(path, "ERROR") != 0)
	{
		token_path = strtok(path, "=");
		for (i = 0; token_path != NULL; i++)
		{
			if (i == 1)
				tokenizador(token_path, directorys, ":");
			token_path = strtok(NULL, "="); } }
	pwd_s = getpwd();
	if (strcmp(pwd_s, "ERROR") != 0)
	{
		token_path = strtok(pwd_s, "=");
		for (i = 0; token_path != NULL; i++)
		{
			if (i != 0)
				addnode(pwd, token_path);
			token_path = strtok(NULL, "="); } }
	if (strcmp(old_pwd_s, "ERROR") != 0)
		free(old_pwd_s);
	if (strcmp(path, "ERROR") != 0)
		free(path);
	if (strcmp(pwd_s, "ERROR") != 0)
		free(pwd_s);
}
