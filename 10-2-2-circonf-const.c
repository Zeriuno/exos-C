#include <stdio.h>
main()
{
  float rayon, circonf                         ;
  int i, j, k, l                               ;
  const PI = 3.1415                            ; /*pour confronter les performances par rapport à #define*/
  rayon = 5                                    ;
  for (l=0; l <= 10000000; l++)                ;
  {
    for (k=0; k<= 10000000; k++)               ;
    {
      for (j=0; j <= 10000000; j++)            ;
      {
        for (i=0; i <= 10000000; i++)          ;
        {
          circonf = 2 * rayon * PI             ;
        }
      }
    }
  }
  printf("La circonference est %f\n", circonf) ;
}
/*
difficile de comprendre  quelle est la solution la plus performante
$ time ./10-2-2-circonf-const
La circonference est 30.000000

real	0m0.097s
user	0m0.093s
sys	0m0.004s
$ time ./10-2-2-circonf-const
La circonference est 30.000000

real	0m0.097s
user	0m0.093s
sys	0m0.004s
$ time ./10-2-1-circonf-define
La circonference est 30.000000

real	0m0.107s
user	0m0.107s
sys	0m0.000s
$ time ./10-2-1-circonf-define
La circonference est 30.000000

real	0m0.100s
user	0m0.100s
sys	0m0.000s
$ time ./10-2-2-circonf-const
La circonference est 30.000000

real	0m0.095s
user	0m0.094s
sys	0m0.000s
*/
