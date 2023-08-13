#include "string.h"

#include "strnstr.h"

// Origin: https://stackoverflow.com/a/25705264/2928176
// Author: Chris Dodd (https://stackoverflow.com/users/16406/chris-dodd)
char *strnstr(const char *haystack, const char *needle, size_t len) {
  int i;
  size_t needle_len;

  if (0 == (needle_len = strnlen(needle, len))) {
    return NULL;
  }

  for (i=0; i<=(int)(len-needle_len); i++) {
    if (
      (haystack[0] == needle[0]) &&
      (0 == strncmp(haystack, needle, needle_len))
    ) {
      return (char *)haystack;
    }
    haystack++;
  }

  return NULL;
}
