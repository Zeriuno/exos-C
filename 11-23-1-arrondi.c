/*------------------------------------

  Programme de M. Jean-Michel Léry.
  Exercice fait en cours, ici repris.

  -----------------------------------*/


#include <stdio.h>
main()
{
  int  pent, arrondi ;
  float x, pdeci     ;

  printf("Saisir un nombre : ") ;
  scanf("%f", &x)   ;
  pent = x          ;
  pdeci = x - pent  ;
  arrondi = x + 0.5 ;
  printf("Étant donné le nombre saisi, %f\nLa partie entière est %d\nLa partie décimale est %f\nL'arrondi est %d\n", x, pent, pdeci, arrondi);
}
