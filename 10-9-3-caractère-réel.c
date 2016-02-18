/* À partir d'un chiffre avec *virgule*, obtenir un réel, faire la racine carrée */
/* Numéros avec deux chiffes avant la virgule, deux après*/

#include <stdio.h>
#include <math.h>
main()
{
  int entier, decimal                      ;
  float numero_n                           ;
  char numero[5]                           ;

  printf("Saisissez un numéro (XX,XX) : ") ;
  scanf("%s", numero)                      ;
  entier = (numero[0]*10) + numero[1]      ;
  decimal = (numero[3]*10) + numero[4]     ;
  numero_n = entier + (decimal/100)        ;
  printf("%f", numero_n)                   ;

}
