#include "main.h"

char *_getenv(char *str)
{
    extern char **environ;
    int i = 0;
    int j = 0;
    char *retval;
    char copyenv[PATH_MAX];

    while (environ[i])
    {
        j = 0;
        strcpy(copyenv, environ[i]);
        while (copyenv[j] != '\0' && copyenv[j] != '=')
        {
            j++;
        }
        copyenv[j] = '\0';
        j++;
        if (strcmp(copyenv, str) == 0)
        {
            retval = &environ[i][j];
            return (retval);
        }
        i++;
    }
    printf("ERROR: i = %d\n", i);
    return ("ERROR");

}
