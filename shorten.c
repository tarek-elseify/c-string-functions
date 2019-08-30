#include "string.h"
#include <stdio.h>
#include <string.h>

void shorten(char *s, int new_len)
{
  if(strlen(s) == new_len){
    return;
  }else if(new_len < 0){
    printf("%s\n", "Length cannot be less than 0");
    return;
  }else if(new_len > strlen(s)){
    printf("%s\n", "Cannot shorten string to a larger length");
    return;
  }else{
    for(int i=0; i < new_len; i++){
      s++;
    }
    *s = '\0';
  }
}
