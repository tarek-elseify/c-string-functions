#include "string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t diff(char *s1, char *s2)
{
  size_t count = 0;
  char *ptrS1 = s1;
  char *ptrS2 = s2;
  count += (abs(strlen(s2) - strlen(s1)));
  while(*ptrS1 != '\0' && *ptrS2 != '\0'){
    if(*ptrS1 != *ptrS2){
      count++;
    }
    ptrS1++;
    ptrS2++;
  }
  return count;
}
