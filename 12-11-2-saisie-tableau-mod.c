/*
Exercice fait par M. Léry, tous droits réservés
Saisie de notes dans un tableau, '-1' arrête la saisie

Jeu de tests
19 20 10 10 0 1 15 -1
*/
#include <stdio.h>
#define MAX_NOTES 20
void saisie()                                     ;
void affichage(), min_max()                       ;
float moyenne_calcul()                            ;
float min, max, tabnotes[MAX_NOTES]               ;
int nbnotes = 0                                   ;
main()
{
  float moyenne_main                              ;
  int choix                                       ;

  choix = 9999                                    ;
  while(choix !=0)
  {
    printf("\n-1- Saisie\n")                      ;
    printf("-2- Affichage\n")                     ;
    printf("-3- Moyenne\n")                       ;
    printf("-4- min et MAX\n")                    ;
    printf("-0- Quitter\n\n")                     ;
    printf("Choix : ")                            ;

    scanf("%d", &choix)                           ;
    printf("\n\n")                                ;
    switch(choix)
    {
      case 0:
        printf("Au revoir.")                      ;
        break                                     ;
      case 1:
        saisie()                                  ;
        break                                     ;
      case 2:
        affichage()                               ;
        break                                     ;
      case 3:
        moyenne_main = moyenne_calcul()           ;
        printf("Moyenne : %6.2f\n", moyenne_main) ;
        break                                     ;
      case 4:
        min_max()                                 ;
        break                                     ;
      default:
        printf("Erreur de saisie")                ;
        break                                     ;
    }
  }
}


/*------------------------------------------
--                                        --
--             Procédure                  --
--             saisie                     --
--                                        --
--                                        --
--                                        --
--                                        --
-------------------------------------------*/

void saisie()
{
  float x                                  ;
  int i                                    ;
  i = nbnotes                              ;
  printf("Entrez une liste de notes et terminez par -1 : ")   ;
  x = 1                                    ;
  while(x >=0)
  {
    scanf("%f", &x)                        ;
    tabnotes[i++] = x                      ;
  }

  nbnotes = i - 1                          ;
}

/*------------------------------------------
--                                        --
--             Procédure                  --
--             affichage                  --
--                                        --
--                                        --
--                                        --
--                                        --
-------------------------------------------*/

void affichage()
{
  int i                                    ;

  if(nbnotes == 0)
  {
    printf("Pas de notes.")                ;
  }
  else
  {
  printf("Voici les notes saisies :\n\n")  ;
  for (i=0; i < nbnotes ; i++)
  {
    printf("%6.2f\n", tabnotes[i])         ;
  }
  printf("\n")                             ;
  }
}


/*------------------------------------------
--                                        --
--             Fonction                   --
--             moyenne                    --
--                                        --
--                                        --
--                                        --
--                                        --
-------------------------------------------*/

float moyenne_calcul()
{
  int i                                    ;
  float moyenne, somme                     ;
  somme = 0                                ;
  max = -9999                              ;
  min = 9999                               ;
  for(i = 0 ; i < nbnotes ; i++)
  {
    somme = somme + tabnotes[i]            ;
    if(tabnotes[i] < min)
    {
      min = tabnotes[i]                    ;
    }
    if(tabnotes[i] > max)
    {
      max = tabnotes[i]                    ;
    }
  }
  moyenne = somme / nbnotes                ;
  return moyenne                           ;
}

/*------------------------------------------
--                                        --
--             Procédure                  --
--             min/max                    --
--             par moi                    --
--                                        --
--                                        --
--                                        --
-------------------------------------------*/

void min_max()
{
  printf("Note minimale : %6.2f\n", min)   ;
  printf("Note maximale : %6.2f\n", max)   ;
}
