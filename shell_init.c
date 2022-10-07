#include "main.h"

/**
 * shell_init - initialize the virtual environment
 * @env: the environment given to us by the OS/shell
*/
void shell_init(char **env)
{
	int i = 0;

	envList = NULL;
	while (env[i] != NULL)
	{
		add_env_t_end(&envList, env[i]);
		i++;
	}
	/* print_envlist(envList); */

}
