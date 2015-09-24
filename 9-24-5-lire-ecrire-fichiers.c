/*exercice de M.Léry*/

#include <stdio.h>
#include <ctype.h>
main()
{
  char nom[100], prenom[100], fichier_entree[100], fichier_sortie[100] ;
  int age ;
  FILE *f1; /*réduction à une seule variable fichier*/

  printf("Nom du fichier à lire : ")        ;
  scanf("%s", fichier_entree)               ;
  f1=fopen(fichier_entree, "r")             ;
  fscanf(f1, "%s %s %d", nom, prenom, &age) ;
  fclose(f1)                                ;
  nom[0] = toupper(nom[0])                  ;
  prenom[0] = toupper(prenom[0])            ;
  printf("Nom du fichier à sauvegarder : ") ;
  scanf("%s", fichier_sortie)               ;
  f1=fopen(fichier_sortie, "w")             ;
  fprintf(f1, "%s %s %d\n", nom, prenom, age) ;
  fclose(f1)                                ;
}
