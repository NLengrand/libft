#include "stdlib.h"

char* ft_strnew(int n)
{
  return (char*)malloc((n + 1) * sizeof(char));
}

