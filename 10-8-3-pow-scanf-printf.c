/*---------*/
/*  pow.c  */
/*---------*/

/* petit test de comment fonctionne pow */

#include <stdio.h>
#include <math.h>
main()
{
  int chiffre, exposant, puissance        ;
  printf("Saisir un chiffre : ")          ;
  scanf("%d", &chiffre)                   ;
  printf("Saisir son exposant : ")        ;
  scanf("%d", &exposant)                  ;
  puissance = pow(chiffre, exposant)      ;
  printf("Le résultat est %d", puissance) ;
}
