#include <stdio.h>

main()
{
  int a, b, somme                                ;

  printf("Entrez deux valeurs (ex. 12 24) : ")   ;
  scanf("%d",&a)                                 ;
  scanf("%d",&b)                                 ;
  somme = a + b                                  ;
  printf("somme de %d + %d = %d\n", a, b, somme) ;
}
