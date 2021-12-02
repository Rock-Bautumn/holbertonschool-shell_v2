#include "main.h"

int space_count(char *str, char *delimiter)
{
  int i = 0;
  int count = 1;
  int gotspace = 1;
  char delim = delimiter[0];

  if (str[i] == '\0' || str == NULL)
  return (0);

  while (str[i] != '\0')
  {
    if (str[i] == delim)
    {
      if (gotspace == 0)
        {
          count++;
          gotspace = 1;
        }
    }
    else
      gotspace = 0;
    i++;
  }
  return (count);
}


char ** splitter(char *fun, char *delimiter)
{
        char **holder;
        int i = 0;
        long int length = space_count(fun, delimiter);
        char *temp;

        /*strtok must take an array of chars not a pointer*/
        holder = malloc(sizeof(char*) * (length + 1));
        /*strtok has to be split to the same var so create temp*/
        temp = strtok(fun, delimiter);
        holder[i] = temp;
        while(temp != NULL)
        {
                i++;
                temp = strtok(NULL, delimiter);
                holder[i] = temp;
        }
        return(holder);
}
