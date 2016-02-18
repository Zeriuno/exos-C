/* À partir d'un chiffre avec *virgule*, obtenir un réel, faire la racine carrée */
/* Numéros avec deux chiffes avant la virgule, deux après*/
/* Autre méthode par rapport à 10-9-3-caractère-réel. Un seul scanf pour récupérer la partie entière ainsi que la partie décimale */

#include <stdio.h>
#include <math.h>
main()
{
  int entier, decimal                      ;
  float numero_n                           ;

  printf("Saisissez un numéro (XX,XX) : ") ;
  scanf("%d,%d", &entier, &decimal)        ;
  numero_n = entier + (decimal/100)        ;
  printf("%f", numero_n)                   ;

}
