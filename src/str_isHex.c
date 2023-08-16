#include <stdlib.h>
#include <string.h>

#include "str_isHex.h"

bool str_isHex(const char *subject) {
  int i;
  size_t l = strlen(subject);
  for(i = 0 ; i < l ; i++) {
    if (
      (subject[i] >= 'a' && subject[i] <= 'f') ||
      (subject[i] >= 'A' && subject[i] <= 'F') ||
      (subject[i] >= '0' && subject[i] <= '9')
    ) {
      continue;
    }
    return false;
  }
  return true;
}
