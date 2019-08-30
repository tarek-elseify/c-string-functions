#include "string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_connect(char **strs, int n, char c)
{
  char *ret;
  char string[4096];
  char *strPtr = string;
  int num_words = 0;
  while(strs[++num_words] != NULL){
  }
  for(int i=0; i < num_words; i++){
    strcat(strPtr, strs[i]);
    strPtr += strlen(strs[i]);
    if(i != num_words - 1){
      *strPtr = c;
    }
  }
  ret = (char *) malloc(strlen(string) + 1);
  strcpy(ret, string);
  return ret;
}
