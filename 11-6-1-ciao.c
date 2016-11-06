#include <stdio.h>

int main (int argc, char *  argv[])
{
  if(argc == 2)
  {
    printf("Ciao %s!\n", argv[1])   ;
    printf("argc = %d\n", argc)     ;
    printf("argv[0] = %s\n", argv[0]) ;
  }
  else
    printf("Ciao :-)\n")              ;
  return 0                          ;
}
