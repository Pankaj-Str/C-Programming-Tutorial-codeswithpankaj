#include <stdio.h>

int main()
{
  int var = 5;

  printf("var: %d\n", var);


  // Notice the use of & before var
  printf("address of var: %p", &var);

  return 0;

}