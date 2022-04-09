#include "main.h"
/**
 *
 *
 *
 *
 */
int suprandbuild(char *buffer)
{
	int exitstatus = 0;

	buffer[strlen(buffer) - 1] = '\0';
	suprtab(buffer);
	exitstatus = checkbuild(buffer);

	return (exitstatus);
}
