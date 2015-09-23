/* Exercice fait par M. Léry */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
main()
{
  char nom[100] ;
  int i, taille ;

  printf("Saisissez votre nom : ") ;
  scanf("%s", nom) ;

  taille = strlen(nom) ;
  for (i=0 ; i < taille ; i ++)
  {
     nom[i] = toupper(nom[i]) ;
   }

  nom[0] = toupper(nom[0]) ;
  printf("%s\n", nom) ;
}
