#include <stdio.h>

int main (int argc, char *  argv[])
{
  if(argc == 2)
  {
    printf("Ciao %s!\n", argv[1]);
    printf("argc = %d\n", argc) ;
  }
  else
    printf("Ciao :-)") ;
  return 0 ;
}
