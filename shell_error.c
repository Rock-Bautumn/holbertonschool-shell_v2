#include "main.h"

void shell_error(int errorno, char *command)
{
        perror(string_builder(errorno, command));
}
