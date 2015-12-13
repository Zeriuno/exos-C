/*
Exercice fait par M. Léry, tous droits réservés
Saisie de notes dans un tableau, '-1' arrête la saisie*/
#include <stdio.h>
#define MAX_NOTES 20
void saisie()                              ;
void affichage(), min_max()                ;
float moyenne_calcul()                     ;
float min, max, tabnotes[MAX_NOTES]        ;
int nbnotes                                ;
main()
{
  float moyenne_main                       ;
  saisie()                                 ;
  affichage()                              ;
  moyenne_main = moyenne_calcul()          ;
  printf("Moyenne : %6.2f\n", moyenne_main);
  min_max()                                ;
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
  i = 0                                    ;
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
  printf("Voici les notes saisies :\n\n")  ;
  for (i=0; i < nbnotes ; i++)
  {
    printf("%6.2f\n", tabnotes[i])         ;
  }
  printf("\n")                             ;
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
