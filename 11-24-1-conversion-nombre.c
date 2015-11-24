/*-------------------------------
  Conversion d'un nombre donné
  entre plusieurs bases:
  décimale
  octale
  hexadécimale
  hexadécimale en majuscule
  ---------------------------------*/

#include <stdio.h>
main()
{
  int i ;

  printf("Saisir un nombre : ") ;
  scanf("%d", &i)               ;

  printf("Le nombre %d est\n%o en base octale\n%X ou %X en base hécadécimale\n", i, i , i, i) ;
}
