#include <stdio.h>
#define PI 3.1415/*cette méthode résulte plus lente que const PI=3.1415*/
main()
{
  float rayon, circonf   ;

  rayon = 10            ;
  circonf = PI*2*rayon  ;
  printf("%f", circonf) ;
}
