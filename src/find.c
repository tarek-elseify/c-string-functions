#include "string.h"
#include <string.h>

int find(char *h, char *n)
{
  char *found = strstr(h, n);
  if(found == NULL){
    return -1;
  }else{
    return strlen(h) - strlen(found);
  }
}
