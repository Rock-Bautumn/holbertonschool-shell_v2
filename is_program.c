#include "main.h"

void is_program (char **argv)
{
	char newline[2] = {'\n', '\0'};
	char *path = strtok(argv[0], newline);
	char *freeme;
	
	path = islocal(argv[0]);
	path = argtocom(argv[0]);
	if (is_builtin(argv) == 1)
		;
	else if ((path = islocal(argv[0])))
		check_access(path, argv);
	else if((path = argtocom(argv[0])))
	{
		freeme = strdup(path);
		free(path);
		check_access(freeme, argv);
	}
	else
		shell_error(not_found, argv[0]);

}
