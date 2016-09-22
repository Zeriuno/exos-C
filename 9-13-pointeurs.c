#include <stdio.h>

main()
{
  int * ad ;
  int n    ;

  n = 20   ;
  ad = &n  ;
  printf("ad = %d", ad) ;
  *ad = 30 ;
  printf("ad = %d", ad) ;

  return 0 ;
}
