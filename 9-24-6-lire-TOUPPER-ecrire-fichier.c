/*exercice de M.Léry*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
main()
{
  char nom[100], prenom[100], fichier_entree[100], fichier_sortie[100] ;
  int age, taille, i ;
  FILE *f1; /*réduction à une seule variable fichier*/

  printf("Nom du fichier à lire : ")        ;
  scanf("%s", fichier_entree)               ;
  f1=fopen(fichier_entree, "r")             ;
  fscanf(f1, "%s %s %d", nom, prenom, &age) ;
  fclose(f1)                                ;
  taille = strlen(nom)                      ; /*code de M.Léry d'ailleurs, mis ici par moi*/
  for (i=0 ; i < taille ; i ++)
  {
     nom[i] = toupper(nom[i])               ;
   } /*code de M.Léry d'ailleurs, mis ici par moi*/
  taille = strlen(prenom)                   ; /*code de M.Léry d'ailleurs, mis ici par moi*/
  for (i=0 ; i < taille ; i ++)
  {
    prenom[i] = toupper(prenom[i])          ;
  } /*code de M.Léry d'ailleurs, mis ici par moi*/
  printf("Nom du fichier à sauvegarder : ") ;
  scanf("%s", fichier_sortie)               ;
  f1=fopen(fichier_sortie, "w")             ;
  fprintf(f1, "%s %s %d\n", nom, prenom, age) ;
  fclose(f1)                                ;
}
