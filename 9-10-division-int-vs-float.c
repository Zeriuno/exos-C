#include <stdio.h>

main()
{
  int   i, j, k ;
  float x, y, z ;

  printf("Entrez deux entiers (ex. 12 24)        : ") ;
  scanf("%d",&i) ;
  scanf("%d",&j) ;

  printf("Entrez deux réels (ex. 1.2 2.4)        : ") ;
  scanf("%f",&x) ;
  scanf("%f",&y) ;

  k = i / j ;
  z = x / y ;
  printf("Division d'entiers                     : %d\n"), k = i / j ;
  printf("Division de réels                      : %f\n"), z = x / y ;
  k = x / y ;
  printf("Division de réels avec résultat entier : ")
}
/*
Ça ne marche pas, à corriger
*/
