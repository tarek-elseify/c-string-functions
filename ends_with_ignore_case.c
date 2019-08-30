#include "string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ends_with_ignore_case(char *s, char *suff)
{
  take_last(s, strlen(suff));
  if(strcmp_ign_case(s,suff)==0){
    return 1;
  }else{
    return 0;
  }
}
