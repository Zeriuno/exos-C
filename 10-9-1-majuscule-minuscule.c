/*-----------------------*/
/* majuscule-minuscule.c */
/*-----------------------*/

/* la majuscule saisie est convertie en minuscule */
/* cela peut également être fait par la fonction tolower(), qui nécessite par contre de ctype.h */

#include <stdio.h>
main()
{
  char majuscule, minuscule ;
  printf("Saisir une lettre majuscule : ") ;
  scanf("%c", &majuscule) ;
  printf("Merci!\nJe vais maintenant afficher la même lettre en minuscule.\n") ;
  minuscule = majuscule + 32 ;
  printf("La majuscule correspondante est %c\n", minuscule) ;
}
