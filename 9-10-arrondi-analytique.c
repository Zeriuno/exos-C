#include <stdio.h>
main()
{
  int arrondi, p_ent  ;
  float x, p_deci     ;


  printf("Entrez un réel : ") ;
  scanf("%f",&x)              ;
  
  p_ent   = x         ;
  p_deci  = x - p_ent ;
  arrondi = x + 0.5   ;

  printf("La partie entière est  : %d\n", p_ent)   ;
  printf("La partie décimale est : %f\n", p_deci)  ;
  printf("L'arrondi est          : %d\n", arrondi) ;

}
