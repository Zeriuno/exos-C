/* Exercice fait par M. Léry */
#include <stdio.h>
#include <ctype.h>
main()
{
  char nom[100] ;
  printf("Saisissez votre nom : ") ;
  scanf("%s", nom) ;
  nom[0] = toupper(nom[0]) ;
  printf("%s\n", nom) ;
}
