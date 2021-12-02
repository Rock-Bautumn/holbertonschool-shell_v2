#include "main.h"

void is_program (char **argv, char *originalinput)
{

	char *path = argv[0];
	char *localpath;
	char *argpath;

	if (is_builtin(argv, originalinput) == 1)
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
