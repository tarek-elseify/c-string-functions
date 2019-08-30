#include "string.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int strcmp_ign_case(char *s1, char *s2)
{
  if(strlen(s1) == strlen(s2)){
    while(*s1!='\0'){
      if(toupper(*s1) > toupper(*s2)){
	return 1;
      }else if(toupper(*s1) < toupper(*s2)){
	return -1;
      }
      s1++;
      s2++;
    }
    return 0;
  }else{
    while(*s1!='\0' && *s2!='\0'){
      if(toupper(*s1) > toupper(*s2)){
	return 1;
      }else if(toupper(*s1) < toupper(*s2)){
	return -1;
      }
      s1++;
      s2++;
    }
    if(strlen(s1) < strlen(s2)){
      return -1;
    }else{
      return 1;
    }
  }  
}
