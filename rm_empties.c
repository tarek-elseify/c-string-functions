#include "string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void rm_empties(char **words)
{
  int num_words =  0;
  int non_empty = 0;
  int largest_str = 0;
  while(words[num_words] != NULL){
    num_words++;
  }
  for(int i = 0; i < num_words; i++){
    if(words[i][0] != '\0'){
      non_empty++;
    }
    if(strlen(words[i]) > largest_str){
      largest_str = strlen(words[i]);
    }
  }
  char string[non_empty][++largest_str];
  int index = 0;
  for(int i=0; i < num_words; i++){
    if(words[i][0] != '\0'){
      strcpy(string[index], words[i]);
      index++;
    }
  }
  *words = (char *) malloc(non_empty * sizeof(char *));
  for(int i=0; i < non_empty; i++){
    words[i] = malloc(largest_str);
    strcpy(words[i], string[i]);
  }
  words[non_empty] = NULL;
}
