/* Exemple de cours de M. Léry */
#include <stdio.h>
main()
{
  char nom[100], prenom[200]             ;
  int age                                ;
  FILE *f1                               ;

  f1 = fopen("liste.txt", "r")           ;
  fscanf(f1, "%s", nom)                  ;
  fscanf(f1, "%s", prenom)               ;
  fscanf(f1, "%d",&age)                  ;
  fclose(f1)                             ;
  printf("%s %s %d\n", nom, prenom, age) ;
}
