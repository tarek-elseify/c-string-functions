#include "string.h"
#include <stdio.h>
#include <string.h>

void rm_left_space(char *s)
{
  char *ptr = s;
  while(*ptr==' ' || *ptr=='\t' || *ptr=='\n'){
    ptr++;
  }
  strcpy(s,ptr);
}
