#include <stdio.h>
main()
{
  float rayon, circonf  ;
  const PI = 3.1415     ; /*cette méthode résulte moins rapide que #define PI 3.1415*/
  rayon = 10            ;
  circonf = PI*2*rayon  ;
  printf("%f", circonf) ;
}
