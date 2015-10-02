#include <stdio.h>
#define PI 3,1415 /* pour confronter les performances par rapport a const */
main()
{
  float rayon, circonf                       ;
  int i                                      ;
  rayon = 5                                  ;
  for (i=0; i < 10000000; i++)               ;
  {
    circonf = 2 * rayon * PI                 ;
  }
  printf("La circonference est %f", circonf) ;
}
