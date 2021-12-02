#include "main.h"

void is_program (char **argv)
{
	char newline[2] = {'\n', '\0'};
	
	char *path = strtok(argv[0], newline);

	printf("the path is %s\n", argv[0]);

	path = islocal(argv[0]);

	printf("our islocal is %s\n", path);

	path = argtocom(argv[0]);

	printf("our arg2com is %s\n", path);

	if (is_builtin(argv) == 1)
		;
	else if ((path = islocal(argv[0])))
		check_access(path, argv);
	else if((path = argtocom(argv[0])))
		check_access(path, argv);
	else
		shell_error(not_found, argv[0]);

}
