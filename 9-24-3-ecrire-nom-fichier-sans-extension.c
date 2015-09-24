/* exercice fait par M. Léry */
#include <stdio.h>
#include <string.h>

main()
{
  char nom[100], prenom[100], fichier[200]                        ;
  int age                                                         ;
  FILE *f1 ;

  printf("Écrire le nom : ")                                      ;
  scanf("%s", nom)                                                ;
  printf("Écrire le prénom : ")                                   ;
  scanf("%s", prenom)                                             ;
  printf("Écrire l'âge : ")                                       ;
  scanf("%d",&age)                                                ;
  printf("Écrire le nom du fichier, sans espaces ni exension : ") ;
  scanf("%s", fichier)                                            ;
  strcat(fichier,".md")                                           ; /*code de moi*/
  f1=fopen(fichier, "w")                                          ; /*code de moi*/
  fprintf(f1, "%s %s %d", nom, prenom, age)                       ; /*code de moi*/
  fclose(f1)                                                      ; /*code de moi*/
  printf("Le fichier a été créé et s'appelle %s\n", fichier)      ; /*code de moi*/
}
