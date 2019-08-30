#include "string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *repeat(char *s, int x, char sep)
{
  char *new = (char *) malloc((strlen(s) * x) + 1);
  char *ptr = new + strlen(s);
  for(int i=0; i < x; i++){
    strcat(new, s);
    *ptr = sep;
    ptr += strlen(s) + 1;
  }
  ptr -= (strlen(s) + 1);
  *ptr = '\0';
  return new;
}

