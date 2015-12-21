#include <stdio.h>
#include <stdlib.h>
main()
{
  char uuid[100]                  ;
  FILE *f ;

  f = popen("uuidgen", "r") ;
  fscanf(f, "%s", uuid)     ;
  pclose(f) ;
}
