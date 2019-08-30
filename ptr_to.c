#include "string.h"
#include <string.h>

char *ptr_to(char *h, char *n)
{
  char *ptr = h;
  if(find(h,n) >= 0){
    return ptr + find(h,n);
  }else{
    return NULL;
  }
}
