#include "string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char **str_chop_all(char *s, char c)
{
  char **ret;
  char *sPtr = s;
  char delim[2];
  delim[0] = c;
  delim[1] = '\0';
  int num_occurences = 0;
  while(*sPtr != '\0'){
    if(*sPtr == c){
      num_occurences++;
    }
    sPtr++;
  }  
  char string[++num_occurences][strlen(s) + 1];
  char *ptr = strtok(s,delim);
  int index = 0;
  while(ptr!=NULL){
    strcpy(string[index], ptr);
    ptr = strtok(NULL, delim);
    index++;
  }
  ret = (char **) malloc(++num_occurences * sizeof(char *));
  for(int i=0; i < num_occurences; i++){
    ret[i] = malloc(strlen(string[i]) + 1);
    strcpy(ret[i], string[i]);
  }
  ret[num_occurences] = NULL;
  return ret;
}
