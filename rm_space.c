#include "string.h"

void rm_space(char *s)
{
  rm_right_space(s);
  rm_left_space(s);
}
