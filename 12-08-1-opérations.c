#include <stdio.h>
main()
{
  int n1, n2, add, sous, mult, div, rest ;

  printf("Saisir un premier nombre, entier : ") ;
  scanf("%d", &n1)      ;
  printf("Un autre : ") ;
  scanf("%d", &n2)      ;
  if(n2=0)
  printf("Je vais faire les quatre opérations avec ces deux nombres...") ;
  add = n1 + n2           ;
  sous = n1 -n2           ;
  mult = n1 * n2          ;
  div = n1 / n2           ;
  rest = n1 % n2          ;
  printf("%d + %d = %d", n1, n2, add)  ;
  printf("%d - %d = %d", n1, n2, sous) ;
  printf("%d * %d = %d", n1, n2, mult) ;
  printf("%d / %d = %d avec reste %d", n1, n2, div, rest) ;
}
