#include "main.h"
/*
 *
 *
 *
 */
void dirs(list_t **directorys, list_t **pwd, list_t **old_pwd)
{
	/*int  i = 0;*/
        char *path = NULL, *pwd_s = NULL, *old_pwd_s = NULL;
	char *token_path = NULL;

	old_pwd_s = getoldpwd();
	token_path = strtok(old_pwd_s, "=");
	while (old_pwd_s != NULL)
		token_path = strtok(NULL, "=");
	printf("token_path: %s\n", token_path);
	addnode(old_pwd, token_path);

	path = getpath();
	strtok(path, "=");
	tokenizador(path, directorys, ":");

	pwd_s = getpwd();
	strtok(pwd_s, "=");
	addnode(pwd, pwd_s);
} 
