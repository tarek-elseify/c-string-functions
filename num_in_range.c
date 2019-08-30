#include "string.h"
#include <stdio.h>
#include <ctype.h>

int num_in_range(char *s1, char b, char t)
{
  int count = 0;
  char *ptr = s1;
  while(*ptr != '\0'){
    if(!isalpha(*ptr)){
      ptr++;
      continue;
    }
    else if(*ptr >= b && *ptr <= t){
      count++;
    }
    ptr++;
  }
  return count;
}
