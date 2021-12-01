#include "main.h"

int is_builtin (char *command)
{

        if (strcmp(command, "exit") == 0)
                return (1);
        if (strcmp(command, "env") == 0)
                return (1);

        return (0);
}
