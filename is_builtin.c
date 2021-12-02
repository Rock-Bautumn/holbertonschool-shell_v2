#include "main.h"

int is_builtin (char **argv)
{

        if (strcmp(argv[0], "exit") == 0)
	{
                shell_exit(argv);
		return (1);
	}
        if (strcmp(argv[0], "env") == 0)
	{
                shell_env();
		return (1);
	}
        return (0);
}
