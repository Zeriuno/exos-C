#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
  char uuid[36]                ;
  int luuid                    ;
  FILE *f                      ;

  f = popen("uuidgen", "r")    ;
  fscanf(f, "%s", uuid)        ;
  pclose(f)                    ;
  luuid = strlen(uuid)         ;
  printf("UUID = %s\n", uuid)  ;
  printf("UUID = %d\n", luuid) ;
}
