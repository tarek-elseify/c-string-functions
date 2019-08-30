#include "string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *dedup(char *s)
{
  char *new = (char *) malloc(strlen(s) + 1);
  char tmp[strlen(s) + 1];
  char *ptr = s;
  char *ptr2 = s;
  int found;
  int i=0;
  while(*ptr!='\0'){
    found = 0;
    while(ptr2 > s){
      ptr2--;
      if(*ptr2 == *ptr){
	found = 1;
      }
    }
    if(found == 0){
      tmp[i] = *ptr;
      i++;     
    }
    ptr++;
    ptr2 = ptr;
  }
  tmp[i] = '\0';
  strcpy(new, tmp);
  new = (char *) realloc(new, strlen(new) + 1);
  return new;
}
