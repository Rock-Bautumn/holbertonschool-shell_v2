#include "main.h"

void is_program (char **argv)
{
	char *path = NULL;

	if (is_builtin(argv) == 1)
		;
	else if((path = islocal(argv[0])))
		check_access(path, argv);
	else if((path = argtocom(argv[0])))
		check_access(path, argv);

	else
		shell_error(not_found, argv[0]);

}

int main ()
{
	char **argv = malloc(sizeof(char *));

	argv[0] = "ls";

	is_program(argv);
	return (0);
}
