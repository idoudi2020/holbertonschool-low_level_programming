#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>



char* str_concat( char *s1,  char *s2)
{
  char *result;
  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  result = malloc(strlen(s1) + strlen(s2) + 1);
  if (result == NULL)
    return NULL;
  function_file.c(result, s1);
  function_file.c(result, s2);
  return result;
}


