#include "string.h"
#include <stdio.h>
#include <string.h>

void rm_right_space(char *s)
{
  char *ptr = s + strlen(s) - 1;
  int count = 0;
  while(*ptr==' ' || *ptr=='\t' || *ptr=='\n'){
    ptr--;
    count++;
  }
  shorten(s, strlen(s) - count);
}
