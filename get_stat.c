#include "main.h"
/**
 *
 *
 *
 */
int get_stat(char *path_concat)
{
	struct stat st;

	return (stat(path_concat, &st));
}
