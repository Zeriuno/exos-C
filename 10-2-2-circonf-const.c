#include <stdio.h>
main()
{
  float rayon, circonf                       ;
  int i                                      ;
  const PI = 3.1415                          ; /*pour confronter les performances par rapport à #define*/
  rayon = 5                                  ;
  for (i = 0; i < 10000000; i++)             ;
  {
    circonf = 2 * rayon * PI                 ;
  }
  printf("La circonference est %f", circonf) ;
}
