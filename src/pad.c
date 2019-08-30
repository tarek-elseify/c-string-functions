#include "string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *pad(char *s, int d)
{
  if(s==NULL){
    return NULL;
  }
  char *new = (char *) malloc(strlen(s) + 1);
  if(strlen(s) % d == 0){
    strcpy(new, s);
    return new;
  }else{
    int multiple = strlen(s);
    while(multiple % d != 0){
      multiple++;
    }
    new = (char *) realloc(new, multiple + 1);
    if(new == NULL){
      return NULL;
    }
    char *ptr = new + strlen(s);
    strcpy(new,s);
    while(ptr < new + multiple){
      *ptr = ' ';
      ptr++;
    }
    *ptr = '\0';
    return new;
  }
}
