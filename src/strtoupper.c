#include <ctype.h>

#include "strtoupper.h"

char * strtoupper(char *str) {
  char *ref = str;
  for(;*ref;++ref) {
    *ref=toupper((unsigned char)*ref);
  }
  return str;
}
