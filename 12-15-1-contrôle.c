/*correction du contrôle du 2015-12-15*/
#include <stdio.h>
#include <ctype.h>
main()
{
  int age                                  ;
  char nom[MAX_NOM], prenom[MAX_PRENOM]    ;
  FILE *a                                  ;

  a = fopen("liste.txt", "r")              ;

  fscanf(a, "%s %s %d", nom, prenom, &age) ;
  nom[0] = toupper(nom[0])                 ;
  prenom[0] = toupper(prenom[0])           ;
  printf("%s %s %c", nom, prenom, age)     ;
  fclose(a)                                ;
}
