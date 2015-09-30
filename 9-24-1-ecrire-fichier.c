/* exercice de cours fait par M. Léry */

#include <stdio.h>
main()
{
  char nom[100], prenom[100]     ;
  int age                          ;
  FILE *f1                         ;
  printf("Écrire le nom : ")       ;
  scanf("%s", nom)                 ;
  printf("Écrire le prénom : ")    ;
  scanf("%s", prenom)              ;
  printf("Écrire l'âge : ")        ;
  scanf("%d",&age)                 ;
  f1=fopen("listesaisie.txt", "w") ;

  /*un fichier qui est ouvert est écrasé, si il existé avant, ou crée, s'il n'existait pas.
  Si un fichier existait, avait des données et est ouvert et fermé, il ne contiendra plus rien*/

  fprintf(f1, "%s %s %d\n", nom, prenom, age) ;
  fclose(f1)                                  ;

}
