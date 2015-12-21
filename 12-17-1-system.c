#include <stdio.h>
#include <stdlib.h>
main()
{
  char uuid[36]                ;
  int luuid                    ;
  FILE *f                      ;

  f = popen("uuidgen", "r")    ;
  fscanf(f, "%s", uuid)        ;
  pclose(f)                    ;
  printf("UUID = %s\n", uuid)  ;
}
