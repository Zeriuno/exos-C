/* Exercice fait par M. Léry*/
#include <stdio.h>
#include <string.h>
main()
{
  int chiffre, base, quotient, reste         ;
  char lettre, chlettre[20], affichage[20]   ;

  printf("Saisir le chiffre à convertir : ") ;
  scanf("%d", &chiffre)                      ;
  printf("Saisir la base : ")                ;
  scanf("%d", &base)                         ;
  quotient = -1                 ;
  affichage[0] = '\0'           ;
  while (quotient != 0)
  {
    reste =  chiffre % base     ;
    quotient = chiffre / base   ;
    chiffre = quotient          ;
    if ((reste >= 0) && (reste <= 9))
    {
/*      printf("%d\n", reste)     ; Inséré pendant la construction du programme, c'est désormais inutile*/
      lettre = reste + 48       ;
    }
    else
    {
      lettre = reste + 55       ;
/*      printf("%c\n", lettre)    ; Inséré pendant la construction du programme, c'est désormais inutile*/
    }
    chlettre[0] = lettre        ;
    chlettre[1] = '\0'          ;
    strcat(chlettre, affichage) ;
    strcpy(affichage, chlettre) ;
  }
  printf("%s\n", affichage)     ;
}
