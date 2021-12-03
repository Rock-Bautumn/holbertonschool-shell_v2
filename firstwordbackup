#include "main.h"

char *first_word(char *input)
{
    int i = 0;
    char firstword[16];
    char *retval;
    
    while (input[i] && input[i] != ' ' && input[i] != '\n')
      {
        firstword[i] = input[i];
        i++;
      }

    firstword[i] = '\0';
    retval =strdup(firstword);
    return (retval);
}
