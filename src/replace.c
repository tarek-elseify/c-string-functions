#include "string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *replace(char *s, char *pat, char *rep)
{
  char string[4096];
  char *strPtr = string;
  char *sPtr = s;
  char *ret;
  char *ptr = strstr(sPtr, pat);
  if(ptr == NULL){
    return s;
  }
  while(ptr != NULL){
    strncpy(strPtr, sPtr, ptr - sPtr);
    strPtr += ptr - sPtr;
    strcpy(strPtr, rep);
    strPtr += strlen(rep);
    sPtr = ptr + strlen(pat);
    ptr = strstr(sPtr, pat);
  }
  ret = (char *) malloc(strlen(string) + 1);
  strcpy(ret, string);
  char *ptr2 = ret;
  ptr2 += strlen(ret);
  *ptr2 = '\0';
  return ret;
}

