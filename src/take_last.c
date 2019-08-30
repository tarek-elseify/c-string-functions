#include "string.h"
#include <string.h>
#include <stdio.h>

void take_last(char *s, int n)
{
  if(n>strlen(s)){
    return;
  }
  char *ptr = s;
  ptr += strlen(s) - n;
  strcpy(s, ptr);
}
