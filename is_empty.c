#include "string.h"

int is_empty(char *s)
{
  if(s==NULL){
    return 1;
  }
  while(*s!='\0'){
    if(*s != ' ' && *s!= '\n' && *s!= '\t'){
      return 0;
    }
    s++;
  }
  return 1;
}
