#include <stdio.h>
main()
{
  char c, nom[30] ;
  int i = 0   ;

  c = 'a'     ;

  printf("Saisir un nom : ") ;
  while((c=getchar()) != '\n') /*code de M. Léry*/
  {
    nom[i++] = c  ;
  }
  nom[i] = '\0' ;
  printf("Nom saisi : %s\n", nom);
}
