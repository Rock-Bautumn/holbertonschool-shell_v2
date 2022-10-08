#include "main.h"

/**
 * shell_exit - Exits the shell
 * @argv: The argv given to the program (shell input)
 * Return: void
 */

void shell_exit(char **argv)
{
	int new_status = exit_status;
	char buf[12];
	char buf2[12];

	if (argv[1] != NULL)
	{
		new_status = _atoi(argv[1]);
		_strcpy(buf2, argv[1]);
	}
	/* print_crumbs(); */
	/* freeEnvList(envList); */
	if (is_pos_ascii_num(argv[1]) == 0 && buf2 != NULL)
	{
		_errorputs("./hsh: ");
		_errorputs(_itoa(loopcount, buf));
		_errorputs(": exit: Illegal number: ");
		_errorputs(buf2);
		_errorputs("\n");
		exit_status = 2;
		fflush(NULL);
	}
	else
	{
		fflush(NULL);
		free_parse_crumbs();
		exit_status = new_status % 256;
		exit(exit_status);
	}
}
