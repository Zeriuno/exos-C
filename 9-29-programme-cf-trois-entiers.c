#include <stdio.h>
main()
{
  float a, b, c                          ;
  int ab, ac                             ;

printf("Saisir un premier chiffre   : ") ;
scanf("%f",&a)                           ;
printf("Saisir un deuxième chiffre  : ") ;
scanf("%f",&b)                           ;
printf("Saisir un troisième chiffre : ") ;
scanf("%f",&c)                           ;
ab = (a < b)                             ;
ac = (a < c)                             ;
if ((ab + ac) == 2)
  {
    printf("a<b et a<c VRAI\n")          ;
  }
  else
  {
    printf("a<b et a<c FAUX\n")          ;
  }
}
