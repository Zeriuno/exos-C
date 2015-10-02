#include <stdio.h>
#include <string.h>
main()
{
  float a, b, c                            ;
  int ab, ac, verite                       ;
  char affirmation[4]                      ;

  printf("Saisir un premier chiffre   : ") ;
  scanf("%f",&a)                           ;
  printf("Saisir un deuxième chiffre  : ") ;
  scanf("%f",&b)                           ;
  printf("Saisir un troisième chiffre : ") ;
  scanf("%f",&c)                           ;
  ab = a < b                               ;
  ac = a < c                               ;
  verite = ab + ac ;
  printf("%d + %d = %d", ab, ac, verite)   ;
  if (verite == 2)
  {
    strcpy(affirmation, "VRAI")            ;
  }
  else
  {
    strcpy(affirmation, "FAUX")            ;
  }
  printf("a<b et a<c %s\n", affirmation)   ;
}
