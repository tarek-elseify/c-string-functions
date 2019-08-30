#include "string.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalize(char *s)
{
  while(*s!='\0'){
    if(isalpha(*s)){
      *s = toupper(*s);
      s++;
      while(*s!= '\0' && *s!=' ' && *s!='\n' && *s!='\t'){
	*s = tolower(*s);
	s++;
      }
    }else{
      s++;
    }
  }
}
