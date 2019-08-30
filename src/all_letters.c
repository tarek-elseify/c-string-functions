#include "string.h"
#include <stdio.h>
#include <ctype.h>

int all_letters(char *s)
{
  char *ptr = s;
  int charCase;
  int testCase;
  int isTrue = 0;
  while(!isalpha(*ptr)){
    ptr++;
  }
  if(*ptr != '\0'){
    charCase = isupper(*ptr);
  }else{
    return ++isTrue;
  }
  while(*ptr != '\0'){
    if(!isalpha(*ptr)){
      ptr++;
      continue;
    }
    testCase = isupper(*ptr);
    if((testCase == 0 && charCase != 0) || (testCase != 0 && charCase ==0)){
      return isTrue;
    }
    ptr++;
  }
  return ++isTrue;
}
