#include "string.h"
#include <stdio.h>
#include <string.h>

char *str_zip(char *s1, char *s2)
{
  size_t size = strlen(s1) + strlen(s2) + 2;
  char new[size];
  for(int i=0; i < size; i++){
    if(i%2==0 && *s1 != '\0'){
      new[i] = *s1;
      s1++;
    }else if(i%2!=0 && *s2 != '\0'){
      new[i] = *s2;
      s2++;
    }else if(*s2=='\0'){
      new[i] = *s1;
      s1++;
    }else if(*s1=='\0'){
      new[i] = *s2;
      s2++;
    }else{
      break;
    }
  }
  return strdup(new);
}
  
