#include <stdio.h>
main()
{
  int n1, n2, add, sous, mult, div, rest ;

  printf("Saisir un premier nombre, entier : ") ;
  scanf("%d", &n1)        ;

  n2 = 0                  ;
  /*initialisation à 0 afin de rentrer dans la boucle*/
  while(n2 = 0)
  {
    printf("Un autre : ") ;
    scanf("%d", &n2)      ;
  }
  printf("Je vais faire les quatre opérations avec ces deux nombres...") ;

  /*
  suite de affectation et affichage afin de rendre plus compact le traitement de l'exception n2=0
  */

  add = n1 + n2           ;
  printf("%d + %d = %d", n1, n2, add)  ;
  sous = n1 -n2           ;
  printf("%d - %d = %d", n1, n2, sous) ;
  mult = n1 * n2          ;
  printf("%d * %d = %d", n1, n2, mult) ;
  if(n2 != 0)
  {
    div = n1 / n2         ;
    rest = n1 % n2        ;
    printf("%d / %d = %d avec reste %d", n1, n2, div, rest) ;
  }
}
