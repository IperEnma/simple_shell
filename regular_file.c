#include "main.h"
/**
 *
 *
 *
 */
int regular_file(char *path)
{
	struct stat path_stat;
	stat(path, &path_stat);
	return S_ISREG(path_stat.st_mode);
}
