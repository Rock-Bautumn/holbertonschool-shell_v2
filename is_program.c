#include "main.h"

void is_program (char **argv)
{
	char newline[2] = {'\n', '\0'};
	char *path = strtok(argv[0], newline);
	char *localpath;
	char *argpath;
	
	if (is_builtin(argv) == 1)
		;
	else if ((localpath = islocal(path)))
		check_access(localpath, argv);
	else if((argpath = argtocom(path)))
	{
        	check_access(argpath, argv);
		free(argpath);
	}
	else
		shell_error(not_found, path);

}
